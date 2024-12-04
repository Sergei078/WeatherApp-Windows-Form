#pragma once
#include <string>
#include <iostream>

namespace GetWeather {
    
    using namespace std;

    //Клас RequestServer, выполняет запросы на разные сервера.
    class RequestServer
    {
    protected:
        bool result_work = true;

        static size_t writeCallback(char* contents, size_t size, size_t nmemb, std::string* userp);

    public:
        //Запрос на сервер погоды
        void dataAcquisitionWeather();

        //Запрос на сервер погоды на несколько дней
        void dataAcquisitionWeatherDays();

        //Запрос на сервер телеграма
        void dataServerTelegram();

        //Запрос на сервер нейросети
        void dataServerUu();


        bool getResultWork();
    };

    /*WeatherPanelMain класс для получение текущих данных о погоде*/
    class WeatherPanelMain : public RequestServer {
    public:
        int parsingTemp();
        int parsingFeelsLike();
        int parsingCode();

        string dataStr();
        string parsingDescription();
    };

    /*WeatherPanelMain класс для получение данных о погоде (давление, влажность
    скорость ветра)*/
    class WeatherPanelThreeValues : public RequestServer
    {
    public:
        int parsingPressure();
        int parsingHumidity();
        int parsingWindSpeed();
    };

    //WeatherPanelTomorrow класс для получения данных о погоде на завтра
    class WeatherPanelTomorrow : public RequestServer {
    public:
        int parsingTempTomorrow();
        int parsingFeelsLikeTomorrow();
        int parsingPressureTomorrow();
        int parsingHumidityTomorrow();
        int parsingWindSpeed();
        int parsingCodeTomorrow();
    };

    //WeatherPanelFiveDays класс для получения данных о погоде на 5 дней
    class WeatherPanelFiveDays : public RequestServer {
    public:
        int parsingFiveDay(int day);
        int parsingCodeFiveDay(int day);

        std::string dataFive(int day);
        std::string SetWeatherIcon(int weatherCode);
    };

    //ThreeHourWeatherForecast для получение данных о погоде на 3 часа
    class ThreeHourWeatherForecast : public RequestServer {
    public:
        float parsingThreeTemp(int hour, int day);
        int parsingThreeCode(int hours, int day);

        std::string parsingThreeTime();
        std::string parsingThreeDatatime(int hours, int day);
    };

    //TimeWeatherStr класс для обработки времени с сервера
    class TimeWeatherStr {
    public:
        int timeDay(const std::string& data_server);
        int timeDataThree(const std::string& data_server);

        std::string timeDataCurrent(const std::string& data_server);
        std::string timeStr(const std::string& data_server);
    };

    //WeatherAdditionallyInfo класс для получение дополнительных данных о погоде
    class WeatherAdditionallyInfo : public RequestServer {
    public:
        float precipitation();
        int cloud();

        std::string direction();
    };

    //SettingsWeather класс для изменений настроек приложения
    class SettingsWeather {
    public:
        void setCity(std::string city_set);
        std::string getCity();

        void setTempC();
        bool getTempC();

        void setTempF();
        bool getTempF();

        void setWindMc();
        bool getWindMc();

        void setWindKm();
        bool getWindKm();

        void setWindMil();
        bool getWindMil();

        void setPressureMmRt();
        bool getPressureMmRt();

        void setPressureMbar();
        bool getPressureMbar();

        void setTokenWeather(std::string token);
        std::string getTokenWeather();

        void setIamTokenWeather(std::string iam_token);
        std::string getIamTokenWeather();

        void setFolderId(std::string folder_id);
        std::string getFolderId();

        void setChatId(std::string chat_id);

        void setTemperatureUu(double temp_uu);
        double getTemperatureUu();

        void setMaxTokensUu(int max_token);
        int  getMaxTokensUu();

        void setSystemPromt(std::string promt_system);
        std::string getSystemPromt();

        void setBoToken(std::string bot_token);
        std::string getBoToken();
    };

    //CreatePromtUu клас для создания промта для совета по погоде
    class CreatePromtUu : public RequestServer {
    public:
        void setPromt();
        std::string getPromt();
    };

    //NeuralNetwork клас для парсинга ответа от сервера
    class NeuralNetwork : public RequestServer {
    public:
        std::string parsingTextUu();

        bool getResultUU();
    };

    //TelegramMessage для создания сообщения для отправки в телеграм
    class TelegramMessage : public RequestServer {
    public:
        void createMessageUser();
    };
}
