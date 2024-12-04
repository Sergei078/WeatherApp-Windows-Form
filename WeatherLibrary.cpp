#include "WeatherLibrary.h"
#include <string>
#include <sstream>
#include <ctime>
#include <locale>
#include <iomanip>
#include <curl/curl.h>
#include <nlohmann/json.hpp>

using namespace std;

//Настройки для телеграм запросов
std::string botToken = "";
std::string chatId = "";
std::string message = "";

//Глобальные переменные, для записи ответа от сервера
nlohmann::json jsonResponse;
string readBuffer;

//Погодные системные настройки
std::string token_iam = "";
std::string folder_id = "";
std::string key_api = "";
std::string link_api = "http://api.weatherapi.com/v1/current.json?";
std::string link_api_forecast = "http://api.weatherapi.com/v1/forecast.json?";
std::string lang_api = "EN";

//Город по умолчанию
std::string settings_city_weather = "Moscow";

//Настройки для нейросети
std::string create_promt = "";
std::string SYSTEM_PROMT = "You are an assistant to a user who needs advice on how to dress for the weather.";
std::string url_uu = "https://llm.api.cloud.yandex.net/foundationModels/v1/completion";
std::string model_gpt = "yandexgpt-lite";
double temperature_uu = 0.8;
int max_tokens = 100;


//Настройка температуры по умолчанию
bool temp_c_settings = true;
bool temp_f_settings = false;

//Настройки ветра по умолчанию
bool wind_mc_settings = false;
bool wind_km_settings = true;
bool wind_mil_settings = false;

//Настройки давления по умолчанию
bool pressure_mm_rt_settings = true;
bool pressure_mbar_settings = false;

//Класс RequestServer
size_t GetWeather::RequestServer::writeCallback(char* contents, size_t size, size_t nmemb, string* userp) {
    ((string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void GetWeather::RequestServer::dataAcquisitionWeather() {
    CURL* curl;
    CURLcode response;

    readBuffer.clear();

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        std::ostringstream urlStream;
        urlStream << link_api
            << "q=" << settings_city_weather
            << "&lang=" << lang_api
            << "&key=" << key_api;

        const std::string url = urlStream.str();

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        response = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (response != CURLE_OK) {
            result_work = false;
        }
        else {
            jsonResponse = nlohmann::json::parse(readBuffer);
        }
    }
    else {
        result_work = false;
    }

    curl_global_cleanup();
}

void GetWeather::RequestServer::dataAcquisitionWeatherDays() {
    CURL* curl;
    CURLcode response;

    readBuffer.clear();

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();

    if (curl) {
        std::ostringstream urlStream;
        urlStream << link_api_forecast
            << "q=" << settings_city_weather
            << "&lang=" << lang_api
            << "&key=" << key_api
            << "&days=" << "6";

        const std::string url = urlStream.str();

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        response = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (response != CURLE_OK) {
            result_work = false;
        }
        else {
            jsonResponse = nlohmann::json::parse(readBuffer);
        }
    }
    else {
        result_work = false;
    }

    curl_global_cleanup();
}

void GetWeather::RequestServer::dataServerTelegram() {
    CURL* curl;
    CURLcode res;

    std::string url = "https://api.telegram.org/bot" + botToken + "/sendMessage";

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());

        std::string postFields = "chat_id=" + chatId + "&text=" + curl_easy_escape(curl, message.c_str(), message.size());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postFields.c_str());

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            result_work = false;
        }

        curl_easy_cleanup(curl);
    }
    else {
        result_work = false;
    }
    curl_global_cleanup();
}

void GetWeather::RequestServer::dataServerUu() {
    nlohmann::json data = {
        {"modelUri", "gpt://" + folder_id + "/" + model_gpt.c_str()},
        {"completionOptions", {
            {"stream", false},
            {"temperature", temperature_uu},
            {"maxTokens", max_tokens}
        }},
        {"messages", {
            {{"role", "system"}, {"text", SYSTEM_PROMT.c_str()}},
            {{"role", "user"}, {"text", create_promt.c_str()}}
        }}
    };

    CURL* curl;
    CURLcode res;

    readBuffer.clear();

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url_uu.c_str());

        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, ("Authorization: Bearer " + token_iam).c_str());
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        std::string jsonData = data.dump();
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonData.c_str());

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writeCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            result_work = false;
        }

        else {
            jsonResponse = nlohmann::json::parse(readBuffer);
        }

        curl_slist_free_all(headers);
        curl_easy_cleanup(curl);
    }
    else {
        result_work = false;
    }

    curl_global_cleanup();
}

bool GetWeather::RequestServer::getResultWork() {
    return result_work;
}


//Класс WeatherPanelMain
std::string GetWeather::WeatherPanelMain::dataStr() {
    if (result_work) {
        return jsonResponse["location"]["localtime"];
    }
}

int GetWeather::WeatherPanelMain::parsingTemp() {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["current"]["temp_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["current"]["temp_c"]) * (9 / 5)) + 32;
        }
    }
}

int GetWeather::WeatherPanelMain::parsingFeelsLike() {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["current"]["feelslike_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["current"]["feelslike_c"]) * (9 / 5)) + 32;
        }
    }
}

string GetWeather::WeatherPanelMain::parsingDescription() {
    if (result_work) {
        return jsonResponse["current"]["condition"]["text"];
    }
}

int GetWeather::WeatherPanelMain::parsingCode() {
    if (result_work) {
        return jsonResponse["current"]["condition"]["code"];
    }
}

//Класс WeatherPanelThreeValues
int GetWeather::WeatherPanelThreeValues::parsingPressure() {
    if (result_work) {
        if (pressure_mbar_settings) {
            return jsonResponse["current"]["pressure_mb"];
        }
        else if (pressure_mm_rt_settings) {
            return (jsonResponse["current"]["pressure_mb"] / 133.322) * 100;
        }
    }
}

int GetWeather::WeatherPanelThreeValues::parsingHumidity() {
    if (result_work) {
        return jsonResponse["current"]["humidity"];
    }
}

int GetWeather::WeatherPanelThreeValues::parsingWindSpeed() {
    if (result_work) {
        if (wind_km_settings) {
            return jsonResponse["current"]["wind_kph"];
        }
        if (wind_mc_settings) {
            double result_mc = jsonResponse["current"]["wind_kph"] / 3.6;
            return ceil(result_mc);
        }
        if (wind_mil_settings) {
            double result_mil = jsonResponse["current"]["wind_kph"] * 0.6214;
            return ceil(result_mil);
        }
    }
}

//Класс WeatherPanelTomorrow
int GetWeather::WeatherPanelTomorrow::parsingTempTomorrow() {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["temp_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["forecast"]["forecastday"][1]["hour"][12]["temp_c"]) * (9 / 5)) + 32;
        }
    }
}

int GetWeather::WeatherPanelTomorrow::parsingFeelsLikeTomorrow() {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["feelslike_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["forecast"]["forecastday"][1]["hour"][12]["feelslike_c"]) * (9 / 5)) + 32;
        }
    }
}

int GetWeather::WeatherPanelTomorrow::parsingHumidityTomorrow() {
    if (result_work) {
        return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["humidity"];
    }
}

int GetWeather::WeatherPanelTomorrow::parsingPressureTomorrow() {
    if (result_work) {
        if (pressure_mbar_settings) {
            return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["pressure_mb"];
        }
        else if (pressure_mm_rt_settings) {
            return (jsonResponse["forecast"]["forecastday"][1]["hour"][12]["pressure_mb"] / 133.322) * 100;
        }
    }
}

int GetWeather::WeatherPanelTomorrow::parsingWindSpeed() {
    if (result_work) {
        if (wind_km_settings) {
            return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["wind_kph"];
        }
        if (wind_mc_settings) {
            double result_mc = jsonResponse["forecast"]["forecastday"][1]["hour"][12]["wind_kph"] / 3.6;
            return ceil(result_mc);
        }
        if (wind_mil_settings) {
            double result_mil = jsonResponse["forecast"]["forecastday"][1]["hour"][12]["wind_kph"] * 0.6214;
            return ceil(result_mil);
        }
    }
}

int GetWeather::WeatherPanelTomorrow::parsingCodeTomorrow() {
    if (result_work) {
        return jsonResponse["forecast"]["forecastday"][1]["hour"][12]["condition"]["code"];
    }
}

//ThreeHourWeatherForecast
float GetWeather::ThreeHourWeatherForecast::parsingThreeTemp(int hours, int day) {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["forecast"]["forecastday"][day]["hour"][hours]["temp_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["forecast"]["forecastday"][day]["hour"][hours]["temp_c"]) * (9 / 5)) + 32;
        }
    }
}

std::string GetWeather::ThreeHourWeatherForecast::parsingThreeTime() {
    return jsonResponse["location"]["localtime"];
}

std::string GetWeather::ThreeHourWeatherForecast::parsingThreeDatatime(int hours, int day) {
    return jsonResponse["forecast"]["forecastday"][day]["hour"][hours]["time"];
}

int GetWeather::ThreeHourWeatherForecast::parsingThreeCode(int hours, int day) {
    return jsonResponse["forecast"]["forecastday"][day]["hour"][hours]["condition"]["code"];
}

//TimeWeatherStr
std::string GetWeather::TimeWeatherStr::timeDataCurrent(const std::string& data_server) {
    std::tm tm = {};
    std::istringstream ss(data_server);
    ss >> std::get_time(&tm, "%Y-%m-%d %H:%M");

    const char* months[] = {
        "January", "February", "March", "April", "May",
        "June", "July", "August", "September", "October",
        "November", "December"
    };

    const char* weekdays[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday",
        "Friday", "Saturday"
    };

    std::mktime(&tm);

    std::ostringstream formatted_date;
    formatted_date << weekdays[tm.tm_wday] << ", "
        << tm.tm_mday << " "
        << months[tm.tm_mon] << " "
        << std::setw(2) << std::setfill('0')
        << tm.tm_hour << ":"
        << std::setw(2) << std::setfill('0')
        << tm.tm_min;

    return formatted_date.str();
}

int GetWeather::TimeWeatherStr::timeDataThree(const std::string& data_server) {
    std::tm tm = {};
    std::istringstream ss(data_server);
    ss >> std::get_time(&tm, "%Y-%m-%d %H:%M");

    std::mktime(&tm);
    std::ostringstream formatted_date;

    formatted_date << tm.tm_hour << ":"
        << std::setw(2) << std::setfill('0');

    return std::stoi(formatted_date.str().substr(0, 2));
}

std::string GetWeather::TimeWeatherStr::timeStr(const std::string& data) {
    std::size_t space_index = data.find(' ');

    return data.substr(space_index + 1);
}

int GetWeather::TimeWeatherStr::timeDay(const std::string& data) {
    int hours_main;

    std::stringstream ss_main(data);

    ss_main >> hours_main;

    if (hours_main >= 0 && hours_main <= 6) {
        return 1;
    }

    else if (hours_main > 6 && hours_main <= 12) {
        return 2;
    }

    else if (hours_main > 12 && hours_main <= 18) {
        return 3;
    }

    else if (hours_main > 18 && hours_main <= 23) {
        return 4;
    }
}

//WeatherPanelFiveDays
std::string GetWeather::WeatherPanelFiveDays::dataFive(int day) {
    if (result_work) {
        return jsonResponse["forecast"]["forecastday"][day]["hour"][12]["time"];
    }
}

int GetWeather::WeatherPanelFiveDays::parsingFiveDay(int day) {
    if (result_work) {
        if (temp_c_settings) {
            return jsonResponse["forecast"]["forecastday"][day]["hour"][12]["temp_c"];
        }
        if (temp_f_settings) {
            return ((jsonResponse["forecast"]["forecastday"][day]["hour"][12]["temp_c"]) * (9 / 5)) + 32;
        }
    }
}

int GetWeather::WeatherPanelFiveDays::parsingCodeFiveDay(int day) {
    if (result_work) {
        return jsonResponse["forecast"]["forecastday"][day]["hour"][12]["condition"]["code"];
    }
}

std::string GetWeather::WeatherPanelFiveDays::SetWeatherIcon(int weatherCode) {
    std::string imagePath;

    if (weatherCode >= 1000 && weatherCode <= 1003) {
        return imagePath = "sunny.png";
    }
    else if (weatherCode >= 1004 && weatherCode <= 1204) {
        return imagePath = "rain.png";
    }
    else if (weatherCode >= 1205 && weatherCode <= 1282) {
        return imagePath = "snow.png";
    }
}

//WeatherAdditionallyInfo
std::string GetWeather::WeatherAdditionallyInfo::direction() {
    if (result_work) {
        return jsonResponse["current"]["wind_dir"];
    }
}

int GetWeather::WeatherAdditionallyInfo::cloud() {
    if (result_work) {
        return jsonResponse["current"]["cloud"];
    }
}

float GetWeather::WeatherAdditionallyInfo::precipitation() {
    if (result_work) {
        return jsonResponse["current"]["precip_mm"];
    }
}

//SettingsWeather
void GetWeather::SettingsWeather::setCity(std::string city_data) {
    settings_city_weather = city_data;
}

std::string GetWeather::SettingsWeather::getCity() {
    return settings_city_weather;
}

void GetWeather::SettingsWeather::setTempC() {
    temp_c_settings = true;
    temp_f_settings = false;
}

bool GetWeather::SettingsWeather::getTempC() {
    return temp_c_settings;
}

void GetWeather::SettingsWeather::setTempF() {
    temp_c_settings = false;
    temp_f_settings = true;
}

bool GetWeather::SettingsWeather::getTempF() {
    return temp_f_settings;
}

void GetWeather::SettingsWeather::setWindKm() {
    wind_mc_settings = false;
    wind_km_settings = true;
    wind_mil_settings = false;
}

bool GetWeather::SettingsWeather::getWindKm() {
    return wind_km_settings;
}

void GetWeather::SettingsWeather::setWindMc() {
    wind_mc_settings = true;
    wind_km_settings = false;
    wind_mil_settings = false;
}

bool GetWeather::SettingsWeather::getWindMc() {
    return wind_mc_settings;
}

void GetWeather::SettingsWeather::setWindMil() {
    wind_mc_settings = false;
    wind_km_settings = false;
    wind_mil_settings = true;
}

bool GetWeather::SettingsWeather::getWindMil() {
    return wind_mil_settings;
}

void GetWeather::SettingsWeather::setPressureMmRt() {
    pressure_mm_rt_settings = true;
    pressure_mbar_settings = false;
}

bool GetWeather::SettingsWeather::getPressureMmRt() {
    return pressure_mm_rt_settings;
}

void GetWeather::SettingsWeather::setPressureMbar() {
    pressure_mm_rt_settings = false;
    pressure_mbar_settings = true;
}

bool GetWeather::SettingsWeather::getPressureMbar() {
    return pressure_mbar_settings;
}

void GetWeather::SettingsWeather::setTokenWeather(std::string token) {
    key_api = token;
}

void GetWeather::SettingsWeather::setTemperatureUu(double temp) {
    temperature_uu = temp;
}

double GetWeather::SettingsWeather::getTemperatureUu() {
    return temperature_uu;
}

void GetWeather::SettingsWeather::setMaxTokensUu(int tokens) {
    max_tokens = tokens;
}

int GetWeather::SettingsWeather::getMaxTokensUu() {
    return max_tokens;
}

void GetWeather::SettingsWeather::setSystemPromt(std::string system_promt) {
    SYSTEM_PROMT = system_promt;
}

std::string GetWeather::SettingsWeather::getSystemPromt() {
    return SYSTEM_PROMT;
}

std::string GetWeather::SettingsWeather::getTokenWeather() {
    return key_api;
}

void GetWeather::SettingsWeather::setIamTokenWeather(std::string iam_token_user) {
    token_iam = iam_token_user;
}

std::string GetWeather::SettingsWeather::getIamTokenWeather() {
    return token_iam;
}

void GetWeather::SettingsWeather::setFolderId(std::string folder_id_user) {
    folder_id = folder_id_user;
}

std::string GetWeather::SettingsWeather::getFolderId() {
    return folder_id;
}

void GetWeather::SettingsWeather::setChatId(std::string chat_id) {
    chatId = chat_id;
}

void GetWeather::SettingsWeather::setBoToken(std::string token_bot) {
    botToken = token_bot;
}

std::string GetWeather::SettingsWeather::getBoToken() {
    return botToken;
}

//CreatePromtUu
void GetWeather::CreatePromtUu::setPromt() {
    if (getResultWork()) {
        int temp = jsonResponse["current"]["temp_c"];
        std::string description = jsonResponse["current"]["condition"]["text"];
        int humidity = jsonResponse["current"]["humidity"];
        int feels_like = jsonResponse["current"]["feelslike_c"];
        int wind_speed = jsonResponse["current"]["wind_kph"];

        create_promt = "This is in " + settings_city_weather + ". The temperature is " + to_string(temp) + " degrees," +
            " felt temperature is " + to_string(feels_like) + " degrees," + " air humidity is " + to_string(humidity) + "%," +
            " wind speed is " + to_string(wind_speed) + " m/s," + " description of the weather: " + description + ".";
    }
}

std::string GetWeather::CreatePromtUu::getPromt() {
    return create_promt;
}

//NeuralNetwork
std::string GetWeather::NeuralNetwork::parsingTextUu() {
    return jsonResponse["result"]["alternatives"][0]["message"]["text"];

}
bool GetWeather::NeuralNetwork::getResultUU() {

    return result_work;
}

//TelegramMessage
void GetWeather::TelegramMessage::createMessageUser() {
    int temp = jsonResponse["current"]["temp_c"];
    std::string description = jsonResponse["current"]["condition"]["text"];
    int humidity = jsonResponse["current"]["humidity"];
    int feels_like = jsonResponse["current"]["feelslike_c"];
    int wind_speed = jsonResponse["current"]["wind_kph"];

    message = "City:" + settings_city_weather + "\n" + "Temperature: " + to_string(temp) + "\n" + "Description: " + description + "\n" +
        "Humidity: " + to_string(humidity) + "\n" + "Feelse like: " + to_string(feels_like) + "\n" +
        "Wind speed: " + to_string(wind_speed);
}