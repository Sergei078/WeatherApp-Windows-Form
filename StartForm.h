#pragma once
#include "WeatherForm.h"
#include <iostream>
#include "WeatherLibrary.h"
#include <msclr/marshal_cppstd.h>

namespace WeatherApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для StartForm
	/// </summary>
	public ref class StartForm : public System::Windows::Forms::Form
	{
	public:
		StartForm(void)
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
		~StartForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label10;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StartForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 279);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 31);
			this->label1->TabIndex = 1;
			this->label1->Text = L"First setup";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(21, 365);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(250, 30);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(16, 337);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 22);
			this->label2->TabIndex = 3;
			this->label2->Text = L"City(necessarily)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Orange;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 551);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 38);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Continue";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &StartForm::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(269, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 27);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Weather App";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(270, 52);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 105);
			this->label4->TabIndex = 6;
			this->label4->Text = L"WeatherApp provides accurate \r\nand real-time weather updates \r\nright at your fing"
				L"ertips. With a \r\nuser-friendly interface, you can \r\neasily check current conditi"
				L"ons.\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(270, 241);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(136, 21);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Version: 0.0.1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(270, 206);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(226, 21);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Author: Dobrynkin Sergei";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(21, 440);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(250, 30);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(312, 365);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(250, 30);
			this->textBox3->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::Gray;
			this->label7->Location = System::Drawing::Point(16, 412);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 22);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Token weather(necessarily)";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::Gray;
			this->label8->Location = System::Drawing::Point(307, 337);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(246, 22);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Folder ID UU(not necessarily)";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Gray;
			this->label9->Location = System::Drawing::Point(307, 412);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(251, 22);
			this->label9->TabIndex = 13;
			this->label9->Text = L"Iam-token UU(not necessarily)";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(312, 440);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(250, 30);
			this->textBox4->TabIndex = 14;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(312, 551);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 38);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Reference";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &StartForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(21, 504);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(541, 30);
			this->textBox5->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::Gray;
			this->label10->Location = System::Drawing::Point(17, 479);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(195, 22);
			this->label10->TabIndex = 17;
			this->label10->Text = L"BotToken (necessarily)";
			// 
			// StartForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(578, 601);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"StartForm";
			this->Text = L"Start app";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Convert::ToString(textBox1->Text) == "") {
			MessageBox::Show("Город не введен!");
		}
		else if (Convert::ToString(textBox2->Text) == "") {
			MessageBox::Show("Токен не введен!");
		}
		else if (Convert::ToString(textBox5->Text) == "") {
			MessageBox::Show("Токен бота не введен!");
		}

		else {
			WeatherForm^ weather_form1 = gcnew WeatherForm();
			GetWeather::SettingsWeather set_weat;
			std::string setting_city = msclr::interop::marshal_as<std::string>(textBox1->Text);
			std::string setting_token = msclr::interop::marshal_as<std::string>(textBox2->Text);
			std::string settings_token_bot = msclr::interop::marshal_as<std::string>(textBox5->Text);
			
			set_weat.setCity(setting_city);
			set_weat.setTokenWeather(setting_token);
			set_weat.setBoToken(settings_token_bot);

			if (Convert::ToString(textBox3->Text) != "") {
				if (Convert::ToString(textBox4->Text) != "") {
					std::string setting_folder = msclr::interop::marshal_as<std::string>(textBox3->Text);
					std::string setting_iam = msclr::interop::marshal_as<std::string>(textBox4->Text);
					set_weat.setFolderId(setting_folder);
					set_weat.setIamTokenWeather(setting_iam);
					this->Hide();
					weather_form1->Show();
				}
				else {
					MessageBox::Show("Если введен folder_id, введите iam-token");
				}
			}
			else {
				this->Hide();
				weather_form1->Show();
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Получить токен погоды:\n https://www.weatherapi.com/docs/" +
			"\n\nПолучить folder_id: https://yandex.cloud/en/docs/resource-manager/operations/folder/get-id?utm_referrer=https%3A%2F%2Fyandex.ru%2F" +
		"\n\nПолучить Iam-token: https://yandex.cloud/ru/docs/iam/operations/iam-token/create" + 
		"\n\nПолучить токен телеграм бота: https://timeweb.com/ru/community/articles/token-bota-telegram-kak-sdelat-gde-vzyat-i-kuda-vstavlyat");
	}
};
}

