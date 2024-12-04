#pragma once
#include <string>
#include <iostream>

namespace GetWeather {
    
    using namespace std;

    //���� RequestServer, ��������� ������� �� ������ �������.
    class RequestServer
    {
    protected:
        bool result_work = true;

        static size_t writeCallback(char* contents, size_t size, size_t nmemb, std::string* userp);

    public:
        //������ �� ������ ������
        void dataAcquisitionWeather();

        //������ �� ������ ������ �� ��������� ����
        void dataAcquisitionWeatherDays();

        //������ �� ������ ���������
        void dataServerTelegram();

        //������ �� ������ ���������
        void dataServerUu();


        bool getResultWork();
    };

    /*WeatherPanelMain ����� ��� ��������� ������� ������ � ������*/
    class WeatherPanelMain : public RequestServer {
    public:
        int parsingTemp();
        int parsingFeelsLike();
        int parsingCode();

        string dataStr();
        string parsingDescription();
    };

    /*WeatherPanelMain ����� ��� ��������� ������ � ������ (��������, ���������
    �������� �����)*/
    class WeatherPanelThreeValues : public RequestServer
    {
    public:
        int parsingPressure();
        int parsingHumidity();
        int parsingWindSpeed();
    };

    //WeatherPanelTomorrow ����� ��� ��������� ������ � ������ �� ������
    class WeatherPanelTomorrow : public RequestServer {
    public:
        int parsingTempTomorrow();
        int parsingFeelsLikeTomorrow();
        int parsingPressureTomorrow();
        int parsingHumidityTomorrow();
        int parsingWindSpeed();
        int parsingCodeTomorrow();
    };

    //WeatherPanelFiveDays ����� ��� ��������� ������ � ������ �� 5 ����
    class WeatherPanelFiveDays : public RequestServer {
    public:
        int parsingFiveDay(int day);
        int parsingCodeFiveDay(int day);

        std::string dataFive(int day);
        std::string SetWeatherIcon(int weatherCode);
    };

    //ThreeHourWeatherForecast ��� ��������� ������ � ������ �� 3 ����
    class ThreeHourWeatherForecast : public RequestServer {
    public:
        float parsingThreeTemp(int hour, int day);
        int parsingThreeCode(int hours, int day);

        std::string parsingThreeTime();
        std::string parsingThreeDatatime(int hours, int day);
    };

    //TimeWeatherStr ����� ��� ��������� ������� � �������
    class TimeWeatherStr {
    public:
        int timeDay(const std::string& data_server);
        int timeDataThree(const std::string& data_server);

        std::string timeDataCurrent(const std::string& data_server);
        std::string timeStr(const std::string& data_server);
    };

    //WeatherAdditionallyInfo ����� ��� ��������� �������������� ������ � ������
    class WeatherAdditionallyInfo : public RequestServer {
    public:
        float precipitation();
        int cloud();

        std::string direction();
    };

    //SettingsWeather ����� ��� ��������� �������� ����������
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

    //CreatePromtUu ���� ��� �������� ������ ��� ������ �� ������
    class CreatePromtUu : public RequestServer {
    public:
        void setPromt();
        std::string getPromt();
    };

    //NeuralNetwork ���� ��� �������� ������ �� �������
    class NeuralNetwork : public RequestServer {
    public:
        std::string parsingTextUu();

        bool getResultUU();
    };

    //TelegramMessage ��� �������� ��������� ��� �������� � ��������
    class TelegramMessage : public RequestServer {
    public:
        void createMessageUser();
    };
}
