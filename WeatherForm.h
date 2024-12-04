#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include "WeatherLibrary.h"
#include "SettingsForm.h"
#include <msclr/marshal_cppstd.h>

namespace WeatherApp {

	using namespace System::Drawing::Drawing2D;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для WeatherForm
	/// </summary>
	public ref class WeatherForm : public System::Windows::Forms::Form
	{
	public:
		WeatherForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~WeatherForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ name_city;
	private: System::Windows::Forms::Label^ dataInfo;
	private: System::Windows::Forms::Panel^ panel_weather;
	private: System::Windows::Forms::PictureBox^ iconWeather;
	private: System::Windows::Forms::Label^ tempInfo;
	private: System::Windows::Forms::Label^ descriptionInfo;
	private: System::Windows::Forms::Label^ faalseLikeInfo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ pressureInfo;
	private: System::Windows::Forms::Label^ windSpeedInfo;
	private: System::Windows::Forms::Label^ humInfo;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ timeValuesThree3;
	private: System::Windows::Forms::Label^ timeValuesThree2;
	private: System::Windows::Forms::Label^ timeValuesThree1;
	private: System::Windows::Forms::PictureBox^ iconValuesThree3;
	private: System::Windows::Forms::PictureBox^ iconValuesThree2;
	private: System::Windows::Forms::PictureBox^ iconValuesThree1;
	private: System::Windows::Forms::Label^ tempValuesThree3;
	private: System::Windows::Forms::Label^ tempValuesThree2;
	private: System::Windows::Forms::Label^ tempValuesThree1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ tempFiveDays1;
	private: System::Windows::Forms::PictureBox^ iconFive1;
	private: System::Windows::Forms::Label^ fiveData1;
	private: System::Windows::Forms::Label^ tempFiveDays3;
	private: System::Windows::Forms::PictureBox^ iconFive3;
	private: System::Windows::Forms::Label^ fiveData3;
	private: System::Windows::Forms::Label^ tempFiveDays2;
	private: System::Windows::Forms::PictureBox^ iconFive2;
	private: System::Windows::Forms::Label^ fiveData2;
	private: System::Windows::Forms::Label^ tempFiveDays5;
	private: System::Windows::Forms::PictureBox^ iconFive5;
	private: System::Windows::Forms::Label^ fiveData5;
	private: System::Windows::Forms::Label^ tempFiveDays4;
	private: System::Windows::Forms::PictureBox^ iconFive4;
	private: System::Windows::Forms::Label^ fiveData4;
	private: System::Windows::Forms::Panel^ panelTomorrow;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ tomorrowFaalseLike;
	private: System::Windows::Forms::Label^ tomorrowTemp;
	private: System::Windows::Forms::PictureBox^ iconTomorrow;
	private: System::Windows::Forms::Label^ tomorrow_pressure;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ tomorrow_wind_speed;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ tomorrow_hum;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ uuText;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ additionallyWeather;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonValuesThree;
	private: System::Windows::Forms::Panel^ currentPanel1;
	private: System::Windows::Forms::Button^ buttonCurrent;
	private: System::Windows::Forms::Label^ currentText;
	private: System::Windows::Forms::Panel^ currentPanel2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ cloudiness;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ windDirection;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ precipitation;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ sendButton;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label20;

	protected:
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(WeatherForm::typeid));
			this->name_city = (gcnew System::Windows::Forms::Label());
			this->dataInfo = (gcnew System::Windows::Forms::Label());
			this->panel_weather = (gcnew System::Windows::Forms::Panel());
			this->tempInfo = (gcnew System::Windows::Forms::Label());
			this->descriptionInfo = (gcnew System::Windows::Forms::Label());
			this->faalseLikeInfo = (gcnew System::Windows::Forms::Label());
			this->iconWeather = (gcnew System::Windows::Forms::PictureBox());
			this->currentPanel1 = (gcnew System::Windows::Forms::Panel());
			this->buttonCurrent = (gcnew System::Windows::Forms::Button());
			this->currentText = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->currentPanel2 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pressureInfo = (gcnew System::Windows::Forms::Label());
			this->windSpeedInfo = (gcnew System::Windows::Forms::Label());
			this->humInfo = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonValuesThree = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tempValuesThree3 = (gcnew System::Windows::Forms::Label());
			this->tempValuesThree2 = (gcnew System::Windows::Forms::Label());
			this->tempValuesThree1 = (gcnew System::Windows::Forms::Label());
			this->timeValuesThree3 = (gcnew System::Windows::Forms::Label());
			this->timeValuesThree2 = (gcnew System::Windows::Forms::Label());
			this->timeValuesThree1 = (gcnew System::Windows::Forms::Label());
			this->iconValuesThree3 = (gcnew System::Windows::Forms::PictureBox());
			this->iconValuesThree2 = (gcnew System::Windows::Forms::PictureBox());
			this->iconValuesThree1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->fiveData5 = (gcnew System::Windows::Forms::Label());
			this->tempFiveDays4 = (gcnew System::Windows::Forms::Label());
			this->iconFive4 = (gcnew System::Windows::Forms::PictureBox());
			this->fiveData4 = (gcnew System::Windows::Forms::Label());
			this->tempFiveDays3 = (gcnew System::Windows::Forms::Label());
			this->iconFive3 = (gcnew System::Windows::Forms::PictureBox());
			this->fiveData3 = (gcnew System::Windows::Forms::Label());
			this->tempFiveDays2 = (gcnew System::Windows::Forms::Label());
			this->iconFive2 = (gcnew System::Windows::Forms::PictureBox());
			this->fiveData2 = (gcnew System::Windows::Forms::Label());
			this->tempFiveDays1 = (gcnew System::Windows::Forms::Label());
			this->iconFive1 = (gcnew System::Windows::Forms::PictureBox());
			this->fiveData1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tempFiveDays5 = (gcnew System::Windows::Forms::Label());
			this->iconFive5 = (gcnew System::Windows::Forms::PictureBox());
			this->additionallyWeather = (gcnew System::Windows::Forms::Button());
			this->panelTomorrow = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tomorrow_pressure = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->tomorrow_wind_speed = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->tomorrow_hum = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->tomorrowFaalseLike = (gcnew System::Windows::Forms::Label());
			this->tomorrowTemp = (gcnew System::Windows::Forms::Label());
			this->iconTomorrow = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->cloudiness = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->windDirection = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->precipitation = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->uuText = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->sendButton = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel_weather->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconWeather))->BeginInit();
			this->currentPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel9->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive5))->BeginInit();
			this->panelTomorrow->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconTomorrow))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// name_city
			// 
			this->name_city->AutoSize = true;
			this->name_city->BackColor = System::Drawing::Color::Transparent;
			this->name_city->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_city->ForeColor = System::Drawing::Color::White;
			this->name_city->Location = System::Drawing::Point(137, 13);
			this->name_city->Name = L"name_city";
			this->name_city->Size = System::Drawing::Size(0, 39);
			this->name_city->TabIndex = 1;
			// 
			// dataInfo
			// 
			this->dataInfo->AutoSize = true;
			this->dataInfo->BackColor = System::Drawing::Color::Transparent;
			this->dataInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataInfo->ForeColor = System::Drawing::Color::White;
			this->dataInfo->Location = System::Drawing::Point(175, 57);
			this->dataInfo->Name = L"dataInfo";
			this->dataInfo->Size = System::Drawing::Size(65, 25);
			this->dataInfo->TabIndex = 4;
			this->dataInfo->Text = L"Дата";
			// 
			// panel_weather
			// 
			this->panel_weather->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel_weather->Controls->Add(this->tempInfo);
			this->panel_weather->Controls->Add(this->descriptionInfo);
			this->panel_weather->Controls->Add(this->faalseLikeInfo);
			this->panel_weather->Controls->Add(this->iconWeather);
			this->panel_weather->Controls->Add(this->dataInfo);
			this->panel_weather->Controls->Add(this->name_city);
			this->panel_weather->Location = System::Drawing::Point(12, 64);
			this->panel_weather->Name = L"panel_weather";
			this->panel_weather->Size = System::Drawing::Size(415, 336);
			this->panel_weather->TabIndex = 5;
			// 
			// tempInfo
			// 
			this->tempInfo->AutoSize = true;
			this->tempInfo->BackColor = System::Drawing::Color::Transparent;
			this->tempInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 65, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempInfo->ForeColor = System::Drawing::Color::White;
			this->tempInfo->Location = System::Drawing::Point(27, 120);
			this->tempInfo->Name = L"tempInfo";
			this->tempInfo->Size = System::Drawing::Size(0, 98);
			this->tempInfo->TabIndex = 0;
			// 
			// descriptionInfo
			// 
			this->descriptionInfo->AutoSize = true;
			this->descriptionInfo->BackColor = System::Drawing::Color::Transparent;
			this->descriptionInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->descriptionInfo->ForeColor = System::Drawing::Color::White;
			this->descriptionInfo->Location = System::Drawing::Point(116, 278);
			this->descriptionInfo->Name = L"descriptionInfo";
			this->descriptionInfo->Size = System::Drawing::Size(0, 39);
			this->descriptionInfo->TabIndex = 3;
			// 
			// faalseLikeInfo
			// 
			this->faalseLikeInfo->AutoSize = true;
			this->faalseLikeInfo->BackColor = System::Drawing::Color::Transparent;
			this->faalseLikeInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->faalseLikeInfo->ForeColor = System::Drawing::Color::White;
			this->faalseLikeInfo->Location = System::Drawing::Point(112, 238);
			this->faalseLikeInfo->Name = L"faalseLikeInfo";
			this->faalseLikeInfo->Size = System::Drawing::Size(0, 24);
			this->faalseLikeInfo->TabIndex = 2;
			// 
			// iconWeather
			// 
			this->iconWeather->BackColor = System::Drawing::Color::Transparent;
			this->iconWeather->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconWeather.Image")));
			this->iconWeather->Location = System::Drawing::Point(280, 130);
			this->iconWeather->Name = L"iconWeather";
			this->iconWeather->Size = System::Drawing::Size(78, 85);
			this->iconWeather->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconWeather->TabIndex = 1;
			this->iconWeather->TabStop = false;
			// 
			// currentPanel1
			// 
			this->currentPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->currentPanel1->Controls->Add(this->buttonCurrent);
			this->currentPanel1->Controls->Add(this->currentText);
			this->currentPanel1->Location = System::Drawing::Point(12, 64);
			this->currentPanel1->Name = L"currentPanel1";
			this->currentPanel1->Size = System::Drawing::Size(415, 336);
			this->currentPanel1->TabIndex = 7;
			// 
			// buttonCurrent
			// 
			this->buttonCurrent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->buttonCurrent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonCurrent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonCurrent->ForeColor = System::Drawing::Color::White;
			this->buttonCurrent->Location = System::Drawing::Point(127, 151);
			this->buttonCurrent->Name = L"buttonCurrent";
			this->buttonCurrent->Size = System::Drawing::Size(161, 41);
			this->buttonCurrent->TabIndex = 3;
			this->buttonCurrent->Text = L"Получить";
			this->buttonCurrent->UseVisualStyleBackColor = false;
			this->buttonCurrent->Click += gcnew System::EventHandler(this, &WeatherForm::buttonCurrent_Click);
			// 
			// currentText
			// 
			this->currentText->AutoSize = true;
			this->currentText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->currentText->ForeColor = System::Drawing::Color::White;
			this->currentText->Location = System::Drawing::Point(138, 16);
			this->currentText->Name = L"currentText";
			this->currentText->Size = System::Drawing::Size(138, 20);
			this->currentText->TabIndex = 2;
			this->currentText->Text = L"Current weather";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel1->Controls->Add(this->currentPanel2);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->pressureInfo);
			this->panel1->Controls->Add(this->windSpeedInfo);
			this->panel1->Controls->Add(this->humInfo);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(12, 407);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(415, 89);
			this->panel1->TabIndex = 6;
			// 
			// currentPanel2
			// 
			this->currentPanel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->currentPanel2->Location = System::Drawing::Point(0, 0);
			this->currentPanel2->Name = L"currentPanel2";
			this->currentPanel2->Size = System::Drawing::Size(415, 89);
			this->currentPanel2->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->label10->Location = System::Drawing::Point(281, 58);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(76, 18);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Pressure";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->label9->Location = System::Drawing::Point(129, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(96, 18);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Wind speed";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->label8->Location = System::Drawing::Point(12, 58);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 18);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Humidity";
			// 
			// pressureInfo
			// 
			this->pressureInfo->AutoSize = true;
			this->pressureInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pressureInfo->ForeColor = System::Drawing::Color::White;
			this->pressureInfo->Location = System::Drawing::Point(330, 13);
			this->pressureInfo->Name = L"pressureInfo";
			this->pressureInfo->Size = System::Drawing::Size(73, 22);
			this->pressureInfo->TabIndex = 5;
			this->pressureInfo->Text = L"1010 rt";
			// 
			// windSpeedInfo
			// 
			this->windSpeedInfo->AutoSize = true;
			this->windSpeedInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->windSpeedInfo->ForeColor = System::Drawing::Color::White;
			this->windSpeedInfo->Location = System::Drawing::Point(178, 13);
			this->windSpeedInfo->Name = L"windSpeedInfo";
			this->windSpeedInfo->Size = System::Drawing::Size(100, 22);
			this->windSpeedInfo->TabIndex = 4;
			this->windSpeedInfo->Text = L"12 миль/с";
			// 
			// humInfo
			// 
			this->humInfo->AutoSize = true;
			this->humInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->humInfo->ForeColor = System::Drawing::Color::White;
			this->humInfo->Location = System::Drawing::Point(58, 13);
			this->humInfo->Name = L"humInfo";
			this->humInfo->Size = System::Drawing::Size(49, 22);
			this->humInfo->TabIndex = 3;
			this->humInfo->Text = L"20%";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(284, 13);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 2;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(132, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 13);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel9->Controls->Add(this->label1);
			this->panel9->Controls->Add(this->buttonValuesThree);
			this->panel9->Location = System::Drawing::Point(0, 0);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(415, 140);
			this->panel9->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(155, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(105, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Three hours";
			// 
			// buttonValuesThree
			// 
			this->buttonValuesThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->buttonValuesThree->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonValuesThree->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonValuesThree->ForeColor = System::Drawing::Color::White;
			this->buttonValuesThree->Location = System::Drawing::Point(127, 61);
			this->buttonValuesThree->Name = L"buttonValuesThree";
			this->buttonValuesThree->Size = System::Drawing::Size(161, 41);
			this->buttonValuesThree->TabIndex = 5;
			this->buttonValuesThree->Text = L"Получить";
			this->buttonValuesThree->UseVisualStyleBackColor = false;
			this->buttonValuesThree->Click += gcnew System::EventHandler(this, &WeatherForm::buttonValuesThree_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel2->Controls->Add(this->panel9);
			this->panel2->Controls->Add(this->tempValuesThree3);
			this->panel2->Controls->Add(this->tempValuesThree2);
			this->panel2->Controls->Add(this->tempValuesThree1);
			this->panel2->Controls->Add(this->timeValuesThree3);
			this->panel2->Controls->Add(this->timeValuesThree2);
			this->panel2->Controls->Add(this->timeValuesThree1);
			this->panel2->Controls->Add(this->iconValuesThree3);
			this->panel2->Controls->Add(this->iconValuesThree2);
			this->panel2->Controls->Add(this->iconValuesThree1);
			this->panel2->ForeColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(12, 502);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(415, 140);
			this->panel2->TabIndex = 7;
			// 
			// tempValuesThree3
			// 
			this->tempValuesThree3->AutoSize = true;
			this->tempValuesThree3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempValuesThree3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempValuesThree3->Location = System::Drawing::Point(335, 101);
			this->tempValuesThree3->Name = L"tempValuesThree3";
			this->tempValuesThree3->Size = System::Drawing::Size(39, 20);
			this->tempValuesThree3->TabIndex = 10;
			this->tempValuesThree3->Text = L"+24";
			// 
			// tempValuesThree2
			// 
			this->tempValuesThree2->AutoSize = true;
			this->tempValuesThree2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempValuesThree2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempValuesThree2->Location = System::Drawing::Point(189, 101);
			this->tempValuesThree2->Name = L"tempValuesThree2";
			this->tempValuesThree2->Size = System::Drawing::Size(39, 20);
			this->tempValuesThree2->TabIndex = 9;
			this->tempValuesThree2->Text = L"+24";
			// 
			// tempValuesThree1
			// 
			this->tempValuesThree1->AutoSize = true;
			this->tempValuesThree1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempValuesThree1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)), static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempValuesThree1->Location = System::Drawing::Point(26, 101);
			this->tempValuesThree1->Name = L"tempValuesThree1";
			this->tempValuesThree1->Size = System::Drawing::Size(39, 20);
			this->tempValuesThree1->TabIndex = 8;
			this->tempValuesThree1->Text = L"+24";
			// 
			// timeValuesThree3
			// 
			this->timeValuesThree3->AutoSize = true;
			this->timeValuesThree3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeValuesThree3->ForeColor = System::Drawing::Color::White;
			this->timeValuesThree3->Location = System::Drawing::Point(335, 20);
			this->timeValuesThree3->Name = L"timeValuesThree3";
			this->timeValuesThree3->Size = System::Drawing::Size(54, 20);
			this->timeValuesThree3->TabIndex = 7;
			this->timeValuesThree3->Text = L"13:00";
			// 
			// timeValuesThree2
			// 
			this->timeValuesThree2->AutoSize = true;
			this->timeValuesThree2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeValuesThree2->ForeColor = System::Drawing::Color::White;
			this->timeValuesThree2->Location = System::Drawing::Point(189, 20);
			this->timeValuesThree2->Name = L"timeValuesThree2";
			this->timeValuesThree2->Size = System::Drawing::Size(54, 20);
			this->timeValuesThree2->TabIndex = 6;
			this->timeValuesThree2->Text = L"12:00";
			// 
			// timeValuesThree1
			// 
			this->timeValuesThree1->AutoSize = true;
			this->timeValuesThree1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->timeValuesThree1->ForeColor = System::Drawing::Color::White;
			this->timeValuesThree1->Location = System::Drawing::Point(26, 20);
			this->timeValuesThree1->Name = L"timeValuesThree1";
			this->timeValuesThree1->Size = System::Drawing::Size(54, 20);
			this->timeValuesThree1->TabIndex = 5;
			this->timeValuesThree1->Text = L"11:00";
			// 
			// iconValuesThree3
			// 
			this->iconValuesThree3->BackColor = System::Drawing::Color::Transparent;
			this->iconValuesThree3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconValuesThree3.Image")));
			this->iconValuesThree3->Location = System::Drawing::Point(339, 48);
			this->iconValuesThree3->Name = L"iconValuesThree3";
			this->iconValuesThree3->Size = System::Drawing::Size(50, 50);
			this->iconValuesThree3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconValuesThree3->TabIndex = 4;
			this->iconValuesThree3->TabStop = false;
			// 
			// iconValuesThree2
			// 
			this->iconValuesThree2->BackColor = System::Drawing::Color::Transparent;
			this->iconValuesThree2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconValuesThree2.Image")));
			this->iconValuesThree2->Location = System::Drawing::Point(192, 48);
			this->iconValuesThree2->Name = L"iconValuesThree2";
			this->iconValuesThree2->Size = System::Drawing::Size(50, 50);
			this->iconValuesThree2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconValuesThree2->TabIndex = 3;
			this->iconValuesThree2->TabStop = false;
			// 
			// iconValuesThree1
			// 
			this->iconValuesThree1->BackColor = System::Drawing::Color::Transparent;
			this->iconValuesThree1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconValuesThree1.Image")));
			this->iconValuesThree1->Location = System::Drawing::Point(30, 48);
			this->iconValuesThree1->Name = L"iconValuesThree1";
			this->iconValuesThree1->Size = System::Drawing::Size(50, 50);
			this->iconValuesThree1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconValuesThree1->TabIndex = 2;
			this->iconValuesThree1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel3->Controls->Add(this->panel7);
			this->panel3->Controls->Add(this->fiveData5);
			this->panel3->Controls->Add(this->tempFiveDays4);
			this->panel3->Controls->Add(this->iconFive4);
			this->panel3->Controls->Add(this->fiveData4);
			this->panel3->Controls->Add(this->tempFiveDays3);
			this->panel3->Controls->Add(this->iconFive3);
			this->panel3->Controls->Add(this->fiveData3);
			this->panel3->Controls->Add(this->tempFiveDays2);
			this->panel3->Controls->Add(this->iconFive2);
			this->panel3->Controls->Add(this->fiveData2);
			this->panel3->Controls->Add(this->tempFiveDays1);
			this->panel3->Controls->Add(this->iconFive1);
			this->panel3->Controls->Add(this->fiveData1);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->tempFiveDays5);
			this->panel3->Controls->Add(this->iconFive5);
			this->panel3->ForeColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(710, 64);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(271, 578);
			this->panel3->TabIndex = 8;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(271, 578);
			this->panel7->TabIndex = 19;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(55, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(161, 41);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Получить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &WeatherForm::button3_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(93, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 20);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Five days";
			// 
			// fiveData5
			// 
			this->fiveData5->AutoSize = true;
			this->fiveData5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveData5->ForeColor = System::Drawing::Color::White;
			this->fiveData5->Location = System::Drawing::Point(15, 455);
			this->fiveData5->Name = L"fiveData5";
			this->fiveData5->Size = System::Drawing::Size(198, 20);
			this->fiveData5->TabIndex = 16;
			this->fiveData5->Text = L"Вторник, 6 января(12:00)";
			// 
			// tempFiveDays4
			// 
			this->tempFiveDays4->AutoSize = true;
			this->tempFiveDays4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempFiveDays4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempFiveDays4->Location = System::Drawing::Point(89, 392);
			this->tempFiveDays4->Name = L"tempFiveDays4";
			this->tempFiveDays4->Size = System::Drawing::Size(96, 31);
			this->tempFiveDays4->TabIndex = 15;
			this->tempFiveDays4->Text = L"+28°C";
			// 
			// iconFive4
			// 
			this->iconFive4->BackColor = System::Drawing::Color::Transparent;
			this->iconFive4->Location = System::Drawing::Point(19, 382);
			this->iconFive4->Name = L"iconFive4";
			this->iconFive4->Size = System::Drawing::Size(50, 50);
			this->iconFive4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconFive4->TabIndex = 14;
			this->iconFive4->TabStop = false;
			// 
			// fiveData4
			// 
			this->fiveData4->AutoSize = true;
			this->fiveData4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveData4->ForeColor = System::Drawing::Color::White;
			this->fiveData4->Location = System::Drawing::Point(15, 350);
			this->fiveData4->Name = L"fiveData4";
			this->fiveData4->Size = System::Drawing::Size(198, 20);
			this->fiveData4->TabIndex = 13;
			this->fiveData4->Text = L"Вторник, 5 января(12:00)";
			// 
			// tempFiveDays3
			// 
			this->tempFiveDays3->AutoSize = true;
			this->tempFiveDays3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempFiveDays3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempFiveDays3->Location = System::Drawing::Point(89, 296);
			this->tempFiveDays3->Name = L"tempFiveDays3";
			this->tempFiveDays3->Size = System::Drawing::Size(96, 31);
			this->tempFiveDays3->TabIndex = 12;
			this->tempFiveDays3->Text = L"+26°C";
			// 
			// iconFive3
			// 
			this->iconFive3->BackColor = System::Drawing::Color::Transparent;
			this->iconFive3->Location = System::Drawing::Point(19, 286);
			this->iconFive3->Name = L"iconFive3";
			this->iconFive3->Size = System::Drawing::Size(50, 50);
			this->iconFive3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconFive3->TabIndex = 11;
			this->iconFive3->TabStop = false;
			// 
			// fiveData3
			// 
			this->fiveData3->AutoSize = true;
			this->fiveData3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveData3->ForeColor = System::Drawing::Color::White;
			this->fiveData3->Location = System::Drawing::Point(15, 254);
			this->fiveData3->Name = L"fiveData3";
			this->fiveData3->Size = System::Drawing::Size(198, 20);
			this->fiveData3->TabIndex = 10;
			this->fiveData3->Text = L"Вторник, 4 января(12:00)";
			// 
			// tempFiveDays2
			// 
			this->tempFiveDays2->AutoSize = true;
			this->tempFiveDays2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempFiveDays2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempFiveDays2->Location = System::Drawing::Point(89, 199);
			this->tempFiveDays2->Name = L"tempFiveDays2";
			this->tempFiveDays2->Size = System::Drawing::Size(96, 31);
			this->tempFiveDays2->TabIndex = 9;
			this->tempFiveDays2->Text = L"+20°C";
			// 
			// iconFive2
			// 
			this->iconFive2->BackColor = System::Drawing::Color::Transparent;
			this->iconFive2->Location = System::Drawing::Point(19, 189);
			this->iconFive2->Name = L"iconFive2";
			this->iconFive2->Size = System::Drawing::Size(50, 50);
			this->iconFive2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconFive2->TabIndex = 8;
			this->iconFive2->TabStop = false;
			// 
			// fiveData2
			// 
			this->fiveData2->AutoSize = true;
			this->fiveData2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveData2->ForeColor = System::Drawing::Color::White;
			this->fiveData2->Location = System::Drawing::Point(15, 157);
			this->fiveData2->Name = L"fiveData2";
			this->fiveData2->Size = System::Drawing::Size(198, 20);
			this->fiveData2->TabIndex = 7;
			this->fiveData2->Text = L"Вторник, 3 января(12:00)";
			// 
			// tempFiveDays1
			// 
			this->tempFiveDays1->AutoSize = true;
			this->tempFiveDays1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempFiveDays1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempFiveDays1->Location = System::Drawing::Point(89, 99);
			this->tempFiveDays1->Name = L"tempFiveDays1";
			this->tempFiveDays1->Size = System::Drawing::Size(96, 31);
			this->tempFiveDays1->TabIndex = 6;
			this->tempFiveDays1->Text = L"+21°C";
			// 
			// iconFive1
			// 
			this->iconFive1->BackColor = System::Drawing::Color::Transparent;
			this->iconFive1->Location = System::Drawing::Point(19, 89);
			this->iconFive1->Name = L"iconFive1";
			this->iconFive1->Size = System::Drawing::Size(50, 50);
			this->iconFive1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconFive1->TabIndex = 5;
			this->iconFive1->TabStop = false;
			// 
			// fiveData1
			// 
			this->fiveData1->AutoSize = true;
			this->fiveData1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->fiveData1->ForeColor = System::Drawing::Color::White;
			this->fiveData1->Location = System::Drawing::Point(15, 57);
			this->fiveData1->Name = L"fiveData1";
			this->fiveData1->Size = System::Drawing::Size(198, 20);
			this->fiveData1->TabIndex = 1;
			this->fiveData1->Text = L"Вторник, 2 января(12:00)";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(93, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 20);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Five days";
			// 
			// tempFiveDays5
			// 
			this->tempFiveDays5->AutoSize = true;
			this->tempFiveDays5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tempFiveDays5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->tempFiveDays5->Location = System::Drawing::Point(89, 497);
			this->tempFiveDays5->Name = L"tempFiveDays5";
			this->tempFiveDays5->Size = System::Drawing::Size(96, 31);
			this->tempFiveDays5->TabIndex = 18;
			this->tempFiveDays5->Text = L"+18°C";
			// 
			// iconFive5
			// 
			this->iconFive5->BackColor = System::Drawing::Color::Transparent;
			this->iconFive5->Location = System::Drawing::Point(19, 487);
			this->iconFive5->Name = L"iconFive5";
			this->iconFive5->Size = System::Drawing::Size(50, 50);
			this->iconFive5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconFive5->TabIndex = 17;
			this->iconFive5->TabStop = false;
			// 
			// additionallyWeather
			// 
			this->additionallyWeather->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)),
				static_cast<System::Int32>(static_cast<System::Byte>(129)), static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->additionallyWeather->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->additionallyWeather->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->additionallyWeather->ForeColor = System::Drawing::Color::White;
			this->additionallyWeather->Location = System::Drawing::Point(55, 97);
			this->additionallyWeather->Name = L"additionallyWeather";
			this->additionallyWeather->Size = System::Drawing::Size(161, 41);
			this->additionallyWeather->TabIndex = 4;
			this->additionallyWeather->Text = L"Получить";
			this->additionallyWeather->UseVisualStyleBackColor = false;
			this->additionallyWeather->Click += gcnew System::EventHandler(this, &WeatherForm::additionallyWeather_Click);
			// 
			// panelTomorrow
			// 
			this->panelTomorrow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panelTomorrow->Controls->Add(this->label17);
			this->panelTomorrow->Controls->Add(this->label16);
			this->panelTomorrow->Controls->Add(this->label6);
			this->panelTomorrow->Controls->Add(this->tomorrow_pressure);
			this->panelTomorrow->Controls->Add(this->pictureBox15);
			this->panelTomorrow->Controls->Add(this->tomorrow_wind_speed);
			this->panelTomorrow->Controls->Add(this->pictureBox14);
			this->panelTomorrow->Controls->Add(this->tomorrow_hum);
			this->panelTomorrow->Controls->Add(this->pictureBox13);
			this->panelTomorrow->Controls->Add(this->tomorrowFaalseLike);
			this->panelTomorrow->Controls->Add(this->tomorrowTemp);
			this->panelTomorrow->Controls->Add(this->iconTomorrow);
			this->panelTomorrow->Controls->Add(this->label21);
			this->panelTomorrow->Location = System::Drawing::Point(433, 64);
			this->panelTomorrow->Name = L"panelTomorrow";
			this->panelTomorrow->Size = System::Drawing::Size(271, 336);
			this->panelTomorrow->TabIndex = 9;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::Silver;
			this->label17->Location = System::Drawing::Point(151, 300);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 17);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Pressure";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::Silver;
			this->label16->Location = System::Drawing::Point(151, 249);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(83, 17);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Wind speed";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Silver;
			this->label6->Location = System::Drawing::Point(151, 198);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Humidity";
			// 
			// tomorrow_pressure
			// 
			this->tomorrow_pressure->AutoSize = true;
			this->tomorrow_pressure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tomorrow_pressure->ForeColor = System::Drawing::Color::White;
			this->tomorrow_pressure->Location = System::Drawing::Point(149, 272);
			this->tomorrow_pressure->Name = L"tomorrow_pressure";
			this->tomorrow_pressure->Size = System::Drawing::Size(79, 25);
			this->tomorrow_pressure->TabIndex = 15;
			this->tomorrow_pressure->Text = L"1010 rt";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(33, 272);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(45, 45);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 14;
			this->pictureBox15->TabStop = false;
			// 
			// tomorrow_wind_speed
			// 
			this->tomorrow_wind_speed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tomorrow_wind_speed->ForeColor = System::Drawing::Color::White;
			this->tomorrow_wind_speed->Location = System::Drawing::Point(149, 221);
			this->tomorrow_wind_speed->Name = L"tomorrow_wind_speed";
			this->tomorrow_wind_speed->Size = System::Drawing::Size(78, 25);
			this->tomorrow_wind_speed->TabIndex = 13;
			this->tomorrow_wind_speed->Text = L"12 m/s";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(33, 221);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(45, 45);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			// 
			// tomorrow_hum
			// 
			this->tomorrow_hum->AutoSize = true;
			this->tomorrow_hum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tomorrow_hum->ForeColor = System::Drawing::Color::White;
			this->tomorrow_hum->Location = System::Drawing::Point(149, 170);
			this->tomorrow_hum->Name = L"tomorrow_hum";
			this->tomorrow_hum->Size = System::Drawing::Size(55, 25);
			this->tomorrow_hum->TabIndex = 10;
			this->tomorrow_hum->Text = L"20%";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(33, 170);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(45, 45);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 9;
			this->pictureBox13->TabStop = false;
			// 
			// tomorrowFaalseLike
			// 
			this->tomorrowFaalseLike->AutoSize = true;
			this->tomorrowFaalseLike->BackColor = System::Drawing::Color::Transparent;
			this->tomorrowFaalseLike->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tomorrowFaalseLike->ForeColor = System::Drawing::Color::Silver;
			this->tomorrowFaalseLike->Location = System::Drawing::Point(60, 130);
			this->tomorrowFaalseLike->Name = L"tomorrowFaalseLike";
			this->tomorrowFaalseLike->Size = System::Drawing::Size(150, 24);
			this->tomorrowFaalseLike->TabIndex = 8;
			this->tomorrowFaalseLike->Text = L"Feels like: +20°C\r\n";
			// 
			// tomorrowTemp
			// 
			this->tomorrowTemp->AutoSize = true;
			this->tomorrowTemp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tomorrowTemp->ForeColor = System::Drawing::Color::White;
			this->tomorrowTemp->Location = System::Drawing::Point(24, 57);
			this->tomorrowTemp->Name = L"tomorrowTemp";
			this->tomorrowTemp->Size = System::Drawing::Size(151, 52);
			this->tomorrowTemp->TabIndex = 7;
			this->tomorrowTemp->Text = L"+21°C";
			// 
			// iconTomorrow
			// 
			this->iconTomorrow->BackColor = System::Drawing::Color::Transparent;
			this->iconTomorrow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"iconTomorrow.Image")));
			this->iconTomorrow->Location = System::Drawing::Point(183, 57);
			this->iconTomorrow->Name = L"iconTomorrow";
			this->iconTomorrow->Size = System::Drawing::Size(60, 60);
			this->iconTomorrow->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconTomorrow->TabIndex = 6;
			this->iconTomorrow->TabStop = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(92, 13);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(87, 20);
			this->label21->TabIndex = 1;
			this->label21->Text = L"Tomorrow";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel4->Controls->Add(this->label23);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(433, 64);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(271, 336);
			this->panel4->TabIndex = 16;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(57, 16);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(156, 20);
			this->label23->TabIndex = 1;
			this->label23->Text = L"Tomorrow weather";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(88)), static_cast<System::Int32>(static_cast<System::Byte>(129)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(55, 148);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Получить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &WeatherForm::button2_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->cloudiness);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->label11);
			this->panel5->Controls->Add(this->windDirection);
			this->panel5->Controls->Add(this->label30);
			this->panel5->Controls->Add(this->precipitation);
			this->panel5->Controls->Add(this->pictureBox18);
			this->panel5->Controls->Add(this->pictureBox17);
			this->panel5->Controls->Add(this->pictureBox16);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Location = System::Drawing::Point(433, 407);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(271, 235);
			this->panel5->TabIndex = 10;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label15->Location = System::Drawing::Point(163, 207);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(77, 17);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Cloudiness";
			// 
			// cloudiness
			// 
			this->cloudiness->AutoSize = true;
			this->cloudiness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cloudiness->ForeColor = System::Drawing::Color::White;
			this->cloudiness->Location = System::Drawing::Point(161, 174);
			this->cloudiness->Name = L"cloudiness";
			this->cloudiness->Size = System::Drawing::Size(64, 29);
			this->cloudiness->TabIndex = 16;
			this->cloudiness->Text = L"50%";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label13->Location = System::Drawing::Point(163, 146);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 17);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Precipitation";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label11->Location = System::Drawing::Point(162, 83);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(98, 17);
			this->label11->TabIndex = 14;
			this->label11->Text = L"Wind direction";
			// 
			// windDirection
			// 
			this->windDirection->AutoSize = true;
			this->windDirection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->windDirection->ForeColor = System::Drawing::Color::White;
			this->windDirection->Location = System::Drawing::Point(160, 52);
			this->windDirection->Name = L"windDirection";
			this->windDirection->Size = System::Drawing::Size(53, 29);
			this->windDirection->TabIndex = 11;
			this->windDirection->Text = L"SW";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(93, 197);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 25);
			this->label30->TabIndex = 10;
			// 
			// precipitation
			// 
			this->precipitation->AutoSize = true;
			this->precipitation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->precipitation->ForeColor = System::Drawing::Color::White;
			this->precipitation->Location = System::Drawing::Point(161, 113);
			this->precipitation->Name = L"precipitation";
			this->precipitation->Size = System::Drawing::Size(97, 29);
			this->precipitation->TabIndex = 9;
			this->precipitation->Text = L"0.3 mm";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(25, 174);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 50);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 4;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(25, 113);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 50);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 3;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(25, 52);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 50);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 2;
			this->pictureBox16->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(85, 7);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(101, 20);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Additionally";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel8->Controls->Add(this->additionallyWeather);
			this->panel8->Controls->Add(this->label14);
			this->panel8->Location = System::Drawing::Point(433, 407);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(271, 235);
			this->panel8->TabIndex = 18;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(85, 23);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(101, 20);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Additionally";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel6->Controls->Add(this->label35);
			this->panel6->Controls->Add(this->label37);
			this->panel6->Controls->Add(this->uuText);
			this->panel6->Controls->Add(this->button1);
			this->panel6->Controls->Add(this->label20);
			this->panel6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(271, 578);
			this->panel6->TabIndex = 11;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label35->ForeColor = System::Drawing::Color::White;
			this->label35->Location = System::Drawing::Point(104, 16);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(62, 20);
			this->label35->TabIndex = 1;
			this->label35->Text = L"Advice";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::Color::White;
			this->label37->Location = System::Drawing::Point(31, 544);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(209, 20);
			this->label37->TabIndex = 4;
			this->label37->Text = L"Neural network from Yandex";
			// 
			// uuText
			// 
			this->uuText->AutoSize = true;
			this->uuText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->uuText->Location = System::Drawing::Point(7, 39);
			this->uuText->Name = L"uuText";
			this->uuText->Size = System::Drawing::Size(0, 22);
			this->uuText->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(55, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Generate";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &WeatherForm::button1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(70, 284);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(133, 25);
			this->label20->TabIndex = 5;
			this->label20->Text = L"Недоступно";
			this->label20->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(245, 479);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Text advice";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->panel10->Controls->Add(this->panel6);
			this->panel10->Controls->Add(this->label4);
			this->panel10->Controls->Add(this->label5);
			this->panel10->Controls->Add(this->label2);
			this->panel10->Controls->Add(this->label3);
			this->panel10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(190)),
				static_cast<System::Int32>(static_cast<System::Byte>(190)));
			this->panel10->Location = System::Drawing::Point(987, 64);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(271, 578);
			this->panel10->TabIndex = 20;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(31, 544);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(209, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Neural network from Yandex";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(7, 39);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 22);
			this->label5->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(8, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Your advice";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(957, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(91, 25);
			this->label19->TabIndex = 8;
			this->label19->Text = L"Settings";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1203, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(40, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &WeatherForm::pictureBox1_Click_1);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(667, 30);
			this->textBox1->TabIndex = 11;
			// 
			// sendButton
			// 
			this->sendButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->sendButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sendButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sendButton->ForeColor = System::Drawing::Color::White;
			this->sendButton->Location = System::Drawing::Point(685, 7);
			this->sendButton->Name = L"sendButton";
			this->sendButton->Size = System::Drawing::Size(92, 30);
			this->sendButton->TabIndex = 12;
			this->sendButton->Text = L"send";
			this->sendButton->UseVisualStyleBackColor = false;
			this->sendButton->Click += gcnew System::EventHandler(this, &WeatherForm::sendButton_Click);
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::DarkGray;
			this->panel11->Controls->Add(this->label18);
			this->panel11->Controls->Add(this->sendButton);
			this->panel11->Controls->Add(this->textBox1);
			this->panel11->Controls->Add(this->pictureBox1);
			this->panel11->Controls->Add(this->label19);
			this->panel11->Location = System::Drawing::Point(12, 13);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1246, 45);
			this->panel11->TabIndex = 21;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(793, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(10, 45);
			this->label18->TabIndex = 13;
			// 
			// WeatherForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1270, 660);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->currentPanel1);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panelTomorrow);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_weather);
			this->Controls->Add(this->panel10);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"WeatherForm";
			this->Text = L"Weather";
			this->Shown += gcnew System::EventHandler(this, &WeatherForm::WeatherForm_Shown);
			this->panel_weather->ResumeLayout(false);
			this->panel_weather->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconWeather))->EndInit();
			this->currentPanel1->ResumeLayout(false);
			this->currentPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconValuesThree1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconFive5))->EndInit();
			this->panelTomorrow->ResumeLayout(false);
			this->panelTomorrow->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconTomorrow))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion	
	private: System::Void buttonCurrent_Click(System::Object^ sender, System::EventArgs^ e) {

		GetWeather::RequestServer current_weather_server;
		GetWeather::SettingsWeather weat_set_current;
		GetWeather::WeatherPanelMain weather_current;
		GetWeather::WeatherPanelThreeValues weather_three;
		GetWeather::TimeWeatherStr time_days;

		current_weather_server.dataAcquisitionWeather();

		if (current_weather_server.getResultWork()) {

			int result_days = time_days.timeDay(time_days.timeStr(weather_current.dataStr()));

			//Цвет панели при определенных сутках(Улучшить читаемость)
			if (result_days == 1) {
				this->panel_weather->BackColor = Color::FromArgb(0, 0, 20);
			}

			else if (result_days == 2) {
				this->panel_weather->BackColor = Color::FromArgb(255, 204, 153);
			}

			else if (result_days == 3) {
				this->panel_weather->BackColor = Color::FromArgb(135, 206, 250);
			}

			else if (result_days == 4) {
				this->panel_weather->BackColor = Color::FromArgb(128, 0, 128);
			}

			//Улучшить
			if (weather_current.parsingCode() >= 1000 && weather_current.parsingCode() <= 1003) {
				String^ imagePath = L"sunny.png";
				this->iconWeather->Image = Image::FromFile(imagePath);
			}
			else if (weather_current.parsingCode() >= 1004 && weather_current.parsingCode() <= 1204) {
				String^ imagePath = L"rain.png";
				this->iconWeather->Image = Image::FromFile(imagePath);
			}
			else if (weather_current.parsingCode() >= 1205 && weather_current.parsingCode() <= 1282) {
				String^ imagePath = L"snow.png";
				this->iconWeather->Image = Image::FromFile(imagePath);
			}

			//Название города
			String^ name_city_user = gcnew String(weat_set_current.getCity().c_str());
			this->name_city->Text = name_city_user;

			int current_name_Y = name_city->Location.Y;
			this->name_city->Location = System::Drawing::Point((this->panel_weather->Width -
				this->name_city->Width)
				/ 2, current_name_Y);

			std::string result = time_days.timeDataCurrent(weather_current.dataStr());
			String^ data = gcnew String(result.c_str());
			dataInfo->Text = data;

			//Температура
			if (weat_set_current.getTempC()) {
				this->tempInfo->Text = Convert::ToString(weather_current.parsingTemp()) + "°C";
				this->faalseLikeInfo->Text = "Feels like: " + Convert::ToString(weather_current.parsingFeelsLike()) + "°C";
			}
			else {
				this->tempInfo->Text = Convert::ToString(weather_current.parsingTemp()) + "°F";
				this->faalseLikeInfo->Text = "Feels like: " + Convert::ToString(weather_current.parsingFeelsLike()) + "°F";
			}

			int current_faalse_Y = this->faalseLikeInfo->Location.Y;

			this->faalseLikeInfo->Location = System::Drawing::Point((this->panel_weather->Width -
				this->faalseLikeInfo->Width) / 2, current_faalse_Y);

			//Описание погоды
			std::string description = weather_current.parsingDescription();
			String^ description_info_str = gcnew String(description.c_str());

			this->descriptionInfo->Text = description_info_str;

			int current_description_Y = descriptionInfo->Location.Y;
			this->descriptionInfo->Location = System::Drawing::Point((this->panel_weather->Width -
				this->descriptionInfo->Width)
				/ 2, current_description_Y);

			//Влажность, давление и ветер(панель 2)
			this->humInfo->Text = Convert::ToString(weather_three.parsingHumidity()) + "%";

			if (weat_set_current.getWindKm()) {
				this->windSpeedInfo->Text = Convert::ToString(weather_three.parsingWindSpeed()) + " км/ч";
			}

			if (weat_set_current.getWindMc()) {
				this->windSpeedInfo->Text = Convert::ToString(weather_three.parsingWindSpeed()) + " м/с";
			}

			if (weat_set_current.getWindMil()) {
				this->windSpeedInfo->Text = Convert::ToString(weather_three.parsingWindSpeed()) + " миль/ч";
			}


			int result_mm = weather_three.parsingPressure();

			if (weat_set_current.getPressureMbar()) {
				this->pressureInfo->Text = Convert::ToString(result_mm) + " mb";
			}
			if (weat_set_current.getPressureMmRt()) {
				this->pressureInfo->Text = Convert::ToString(result_mm) + " rt";
			}

			int current_dataInfo_Y = dataInfo->Location.Y;

			this->dataInfo->Location = System::Drawing::Point((this->panel_weather->Width - this->dataInfo->Width)
				/ 2, current_dataInfo_Y);

			this->buttonCurrent->Visible = false;
			this->currentText->Visible = false;
			this->currentPanel1->Visible = false;
			this->currentPanel2->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("Ошибка запроса! Повторите попытку позже"));
		}

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set_tomorrow;
		GetWeather::WeatherPanelTomorrow weather_tomorrow;

		weather_tomorrow.dataAcquisitionWeatherDays();

		if (weather_tomorrow.getResultWork()) {

			//Иконки на погоду в зависимости от условий
			if (weather_tomorrow.parsingCodeTomorrow() >= 1000 && weather_tomorrow.parsingCodeTomorrow() <= 1003) {
				String^ imagePath = L"sunny.png";
				this->iconTomorrow->Image = Image::FromFile(imagePath);
			}
			else if (weather_tomorrow.parsingCodeTomorrow() >= 1004 && weather_tomorrow.parsingCodeTomorrow() <= 1204) {
				String^ imagePath = L"rain.png";
				this->iconTomorrow->Image = Image::FromFile(imagePath);
			}
			else if (weather_tomorrow.parsingCodeTomorrow() >= 1205 && weather_tomorrow.parsingCodeTomorrow() <= 1282) {
				String^ imagePath = L"snow.png";
				this->iconTomorrow->Image = Image::FromFile(imagePath);
			}

			if (weat_set_tomorrow.getTempC()) {
				this->tomorrowTemp->Text = Convert::ToString(weather_tomorrow.parsingTempTomorrow()) + "°C";
				this->tomorrowFaalseLike->Text = "Feels like: " +
					Convert::ToString(weather_tomorrow.parsingFeelsLikeTomorrow()) + "°C";
			}
			else {
				this->tomorrowTemp->Text = Convert::ToString(weather_tomorrow.parsingTempTomorrow()) + "°F";
				this->tomorrowFaalseLike->Text = "Feels like: " +
					Convert::ToString(weather_tomorrow.parsingFeelsLikeTomorrow()) + "°F";
			}

			int tomorrow_faalse_Y = this->tomorrowFaalseLike->Location.Y;

			this->tomorrowFaalseLike->Location = System::Drawing::Point((this->panelTomorrow->Width -
				this->tomorrowFaalseLike->Width) / 2, tomorrow_faalse_Y);

			this->tomorrow_hum->Text = Convert::ToString(weather_tomorrow.parsingHumidityTomorrow()) + "%";

			if (weat_set_tomorrow.getWindKm()) {
				this->tomorrow_wind_speed->Text = Convert::ToString(weather_tomorrow.parsingWindSpeed()) + " km/h";
			}

			if (weat_set_tomorrow.getWindMc()) {
				this->tomorrow_wind_speed->Text = Convert::ToString(weather_tomorrow.parsingWindSpeed()) + " м/с";
			}

			if (weat_set_tomorrow.getWindMil()) {
				this->tomorrow_wind_speed->Text = Convert::ToString(weather_tomorrow.parsingWindSpeed()) + " mil/h";
			}

			int result_pressure_tomorrow = weather_tomorrow.parsingPressureTomorrow();

			if (weat_set_tomorrow.getPressureMbar()) {
				this->tomorrow_pressure->Text = Convert::ToString(result_pressure_tomorrow) + " mb";
			}
			if (weat_set_tomorrow.getPressureMmRt()) {
				this->tomorrow_pressure->Text = Convert::ToString(result_pressure_tomorrow) + " rt";
			}

			this->panel4->Visible = false;
			this->button2->Visible = false;
			this->label23->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("Ошибка запроса! Повторите попытку позже"));
		}
	}

	//Погода на 5 дней
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set_five_days;
		GetWeather::WeatherPanelFiveDays weather_five;

		weather_five.dataAcquisitionWeatherDays();

		if (weather_five.getResultWork()) {

			array<PictureBox^>^ icons = { this->iconFive1, this->iconFive2, this->iconFive3, 
				this->iconFive4, this->iconFive5 };
			array<Label^>^ tempLabels = { this->tempFiveDays1, this->tempFiveDays2,
				this->tempFiveDays3, this->tempFiveDays4, this->tempFiveDays5 };
			array<Label^>^ dateLabels = { this->fiveData1, this->fiveData2, 
				this->fiveData3, this->fiveData4, this->fiveData5 };

			for (short int i = 1; i <= 5; i++) {
				GetWeather::TimeWeatherStr time_weather_str_five;

				std::string image_path = weather_five.SetWeatherIcon(weather_five.parsingCodeFiveDay(i));
				std::string result_time = time_weather_str_five.timeDataCurrent(weather_five.dataFive(i));

				String^ imagePath = msclr::interop::marshal_as<String^>(image_path);
				String^ data = gcnew String(result_time.c_str());
				String^ temp_result;


				if (weat_set_five_days.getTempC()) {
					temp_result = Convert::ToString(weather_five.parsingFiveDay(i)) + "°C";
				}
				else {
					temp_result = Convert::ToString(weather_five.parsingFiveDay(i)) + "°F";
				}

				icons[i - 1]->Image = Image::FromFile(imagePath);
				tempLabels[i - 1]->Text = temp_result;
				dateLabels[i - 1]->Text = data;
			}

			this->panel7->Visible = false;
			this->button3->Visible = false;
			this->label12->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("К сожалению сервер не отдал никакого ответа, мне пришлось выдать ошибку :(. Повторите попытку позже"));
		}
	}

	private: System::Void additionallyWeather_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::WeatherAdditionallyInfo weather_additionally;
		weather_additionally.dataAcquisitionWeather();

		if (weather_additionally.getResultWork()) {
			std::string result_dir = weather_additionally.direction();
			String^ direction_add = gcnew String(result_dir.c_str());
			this->windDirection->Text = direction_add;
			this->precipitation->Text = Convert::ToString(weather_additionally.precipitation()) + " mm";
			this->cloudiness->Text = Convert::ToString(weather_additionally.cloud()) + " %";

			this->panel8->Visible = false;
			this->additionallyWeather->Visible = false;
			this->label14->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("Ошибка запроса! Повторите попытку позже"));
		}
	}

	private: System::Void buttonValuesThree_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set_three;
		GetWeather::ThreeHourWeatherForecast weather_three;
		GetWeather::TimeWeatherStr time_weather_str;

		weather_three.dataAcquisitionWeatherDays();
		
		int hours_res = time_weather_str.timeDataThree(weather_three.parsingThreeTime());
		if (weather_three.getResultWork()) {
			for (int i = 1; i <= 3; i++) {
				int days = 0;

				int current_hour = (hours_res + i) % 24;
				if (hours_res + i >= 24) {
					days = 1;
				}
				
				if (i == 1) {
					std::string time_res = time_weather_str.timeStr(weather_three.parsingThreeDatatime(current_hour, days));
					String^ time1_str = gcnew String(time_res.c_str());
					this->timeValuesThree1->Text = Convert::ToString(time1_str);
					if (weat_set_three.getTempC()) {
						this->tempValuesThree1->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°C";
					}
					else {
						this->tempValuesThree1->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°F";
					}

					if (weather_three.parsingThreeCode(current_hour, days) >= 1000 && 
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"sunny.png";
						this->iconValuesThree1->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"rain.png";
						this->iconValuesThree1->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 && 
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"snow.png";
						this->iconValuesThree1->Image = Image::FromFile(imagePath);
					}
					
				}
				else if (i == 2) {
					this->tempValuesThree2->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days));
					std::string time_res_1 = time_weather_str.timeStr(weather_three.parsingThreeDatatime(current_hour, days));
					String^ time2_str = gcnew String(time_res_1.c_str());
					this->timeValuesThree2->Text = Convert::ToString(time2_str);
					if (weat_set_three.getTempC()) {
						this->tempValuesThree2->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°C";
					}
					else {
						this->tempValuesThree2->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°F";
					}

					if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"sunny.png";
						this->iconValuesThree2->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"rain.png";
						this->iconValuesThree2->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"snow.png";
						this->iconValuesThree2->Image = Image::FromFile(imagePath);
					}
				}
				else if (i == 3) {
					this->tempValuesThree3->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days));
					std::string time_res_2 = time_weather_str.timeStr(weather_three.parsingThreeDatatime(current_hour, days));
					String^ time3_str = gcnew String(time_res_2.c_str());
					this->timeValuesThree3->Text = Convert::ToString(time3_str);
					if (weat_set_three.getTempC()) {
						this->tempValuesThree3->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°C";
					}
					else {
						this->tempValuesThree3->Text = Convert::ToString(weather_three.parsingThreeTemp(current_hour, days)) + "°F";
					}

					if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"sunny.png";
						this->iconValuesThree3->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"rain.png";
						this->iconValuesThree3->Image = Image::FromFile(imagePath);
					}
					else if (weather_three.parsingThreeCode(current_hour, days) >= 1000 &&
						weather_three.parsingThreeCode(current_hour, days) <= 1003) {
						String^ imagePath = L"snow.png";
						this->iconValuesThree3->Image = Image::FromFile(imagePath);
					}
				}
			}

			this->panel9->Visible = false;
			this->buttonValuesThree->Visible = false;
			this->label1->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("Ошибка запроса! Повторите попытку позже"));
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::CreatePromtUu create_promt;
		GetWeather::NeuralNetwork uu;
		
		create_promt.dataAcquisitionWeather();
		create_promt.setPromt();
		
		uu.dataServerUu();

		if (uu.getResultUU()) {
			std::string result = uu.parsingTextUu();

			msclr::interop::marshal_context context;
			String^ uu_server = context.marshal_as<String^>(result);

			if (uu_server != "error") {
				label2->Text = uu_server;
			}
			else {
				label2->Text = "Error";
			}
			this->panel6->Visible = false;
			this->button1->Visible = false;
			this->label35->Visible = false;
			this->label37->Visible = false;
		}
		else {
			MessageBox::Show(Convert::ToString("Ошибка запроса! Повторите попытку позже"));
		}

	}

	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		SettingsForm^ setting_form = gcnew SettingsForm();
		setting_form->Show();
	}

	private: System::Void sendButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "") {
			GetWeather::SettingsWeather set_weat_send_city;
			std::string setting_city_send = msclr::interop::marshal_as<std::string>(textBox1->Text);
			set_weat_send_city.setCity(setting_city_send);
			this->panel7->Visible = true;
			this->button3->Visible = true;
			this->label12->Visible = true;

			this->panel8->Visible = true;
			this->additionallyWeather->Visible = true;
			this->label14->Visible = true;

			this->panel4->Visible = true;
			this->button2->Visible = true;
			this->label23->Visible = true;

			this->buttonCurrent->Visible = true;
			this->currentText->Visible = true;
			this->currentPanel1->Visible = true;
			this->currentPanel2->Visible = true;

			this->panel9->Visible = true;
			this->buttonValuesThree->Visible = true;
			this->label1->Visible = true;

			if (set_weat_send_city.getIamTokenWeather() != "" && set_weat_send_city.getFolderId() != "") {
				this->panel6->Visible = true;
				this->button1->Visible = true;
				this->label35->Visible = true;
				this->label37->Visible = true;
			}
			
		}
		else {
			MessageBox::Show("Поле пустое");
		}
	}

	private: System::Void WeatherForm_Shown(System::Object^ sender, System::EventArgs^ e) {

		GetWeather::SettingsWeather weat_set_chek_uu;
		if (weat_set_chek_uu.getIamTokenWeather() == "" || weat_set_chek_uu.getFolderId() == "") {
			this->label20->Visible = true;
			this->button1->Visible = false;
		}
	}
};
}
