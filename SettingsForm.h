#pragma once
#include <msclr/marshal_cppstd.h>
#include "WeatherLibrary.h"

namespace WeatherApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SettingsForm
	/// </summary>
	public ref class SettingsForm : public System::Windows::Forms::Form
	{
	public:
		SettingsForm(void)
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
		~SettingsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::RadioButton^ radioButtonTempF;
	private: System::Windows::Forms::RadioButton^ radioButtonTempC;



	private: System::Windows::Forms::Label^ label1;



	private: System::Windows::Forms::RadioButton^ radioButtonPressureMBAR;


	private: System::Windows::Forms::RadioButton^ radioButtonPressureMM;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RadioButton^ radioButtonWindMil;

	private: System::Windows::Forms::RadioButton^ radioButtonWindKM;

	private: System::Windows::Forms::RadioButton^ radioButtonWindMC;

	private: System::Windows::Forms::Label^ label2;



	private: System::Windows::Forms::Button^ SaveSettings;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SettingsForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->radioButtonPressureMBAR = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPressureMM = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->radioButtonWindMil = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonWindKM = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonWindMC = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButtonTempF = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonTempC = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SaveSettings = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(397, 379);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->tabPage1->Controls->Add(this->radioButtonPressureMBAR);
			this->tabPage1->Controls->Add(this->radioButtonPressureMM);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->radioButtonWindMil);
			this->tabPage1->Controls->Add(this->radioButtonWindKM);
			this->tabPage1->Controls->Add(this->radioButtonWindMC);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->radioButtonTempF);
			this->tabPage1->Controls->Add(this->radioButtonTempC);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(389, 350);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Weather";
			// 
			// radioButtonPressureMBAR
			// 
			this->radioButtonPressureMBAR->AutoSize = true;
			this->radioButtonPressureMBAR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButtonPressureMBAR->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonPressureMBAR->Location = System::Drawing::Point(143, 294);
			this->radioButtonPressureMBAR->Name = L"radioButtonPressureMBAR";
			this->radioButtonPressureMBAR->Size = System::Drawing::Size(68, 26);
			this->radioButtonPressureMBAR->TabIndex = 9;
			this->radioButtonPressureMBAR->TabStop = true;
			this->radioButtonPressureMBAR->Text = L"mbar";
			this->radioButtonPressureMBAR->UseVisualStyleBackColor = true;
			this->radioButtonPressureMBAR->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonPressureMBAR_CheckedChanged);
			// 
			// radioButtonPressureMM
			// 
			this->radioButtonPressureMM->AutoSize = true;
			this->radioButtonPressureMM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->radioButtonPressureMM->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonPressureMM->Location = System::Drawing::Point(28, 294);
			this->radioButtonPressureMM->Name = L"radioButtonPressureMM";
			this->radioButtonPressureMM->Size = System::Drawing::Size(91, 26);
			this->radioButtonPressureMM->TabIndex = 8;
			this->radioButtonPressureMM->TabStop = true;
			this->radioButtonPressureMM->Text = L"mm rt.st";
			this->radioButtonPressureMM->UseVisualStyleBackColor = true;
			this->radioButtonPressureMM->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonPressureMM_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(24, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Pressure";
			// 
			// radioButtonWindMil
			// 
			this->radioButtonWindMil->AutoSize = true;
			this->radioButtonWindMil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonWindMil->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonWindMil->Location = System::Drawing::Point(260, 173);
			this->radioButtonWindMil->Name = L"radioButtonWindMil";
			this->radioButtonWindMil->Size = System::Drawing::Size(62, 26);
			this->radioButtonWindMil->TabIndex = 6;
			this->radioButtonWindMil->TabStop = true;
			this->radioButtonWindMil->Text = L"mph";
			this->radioButtonWindMil->UseVisualStyleBackColor = true;
			this->radioButtonWindMil->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonWindMil_CheckedChanged);
			// 
			// radioButtonWindKM
			// 
			this->radioButtonWindKM->AutoSize = true;
			this->radioButtonWindKM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonWindKM->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonWindKM->Location = System::Drawing::Point(143, 173);
			this->radioButtonWindKM->Name = L"radioButtonWindKM";
			this->radioButtonWindKM->Size = System::Drawing::Size(66, 26);
			this->radioButtonWindKM->TabIndex = 5;
			this->radioButtonWindKM->TabStop = true;
			this->radioButtonWindKM->Text = L"km/h";
			this->radioButtonWindKM->UseVisualStyleBackColor = true;
			this->radioButtonWindKM->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonWindKM_CheckedChanged);
			// 
			// radioButtonWindMC
			// 
			this->radioButtonWindMC->AutoSize = true;
			this->radioButtonWindMC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonWindMC->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonWindMC->Location = System::Drawing::Point(28, 173);
			this->radioButtonWindMC->Name = L"radioButtonWindMC";
			this->radioButtonWindMC->Size = System::Drawing::Size(56, 26);
			this->radioButtonWindMC->TabIndex = 4;
			this->radioButtonWindMC->TabStop = true;
			this->radioButtonWindMC->Text = L"m/s";
			this->radioButtonWindMC->UseVisualStyleBackColor = true;
			this->radioButtonWindMC->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonWindMC_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(24, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(126, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Wind power";
			// 
			// radioButtonTempF
			// 
			this->radioButtonTempF->AutoSize = true;
			this->radioButtonTempF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonTempF->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonTempF->Location = System::Drawing::Point(143, 66);
			this->radioButtonTempF->Name = L"radioButtonTempF";
			this->radioButtonTempF->Size = System::Drawing::Size(114, 26);
			this->radioButtonTempF->TabIndex = 2;
			this->radioButtonTempF->TabStop = true;
			this->radioButtonTempF->Text = L"Fahrenheit";
			this->radioButtonTempF->UseVisualStyleBackColor = true;
			this->radioButtonTempF->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonTempF_CheckedChanged);
			// 
			// radioButtonTempC
			// 
			this->radioButtonTempC->AutoSize = true;
			this->radioButtonTempC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButtonTempC->ForeColor = System::Drawing::Color::LightGray;
			this->radioButtonTempC->Location = System::Drawing::Point(28, 66);
			this->radioButtonTempC->Name = L"radioButtonTempC";
			this->radioButtonTempC->Size = System::Drawing::Size(87, 26);
			this->radioButtonTempC->TabIndex = 1;
			this->radioButtonTempC->TabStop = true;
			this->radioButtonTempC->Text = L"Celsius";
			this->radioButtonTempC->UseVisualStyleBackColor = true;
			this->radioButtonTempC->CheckedChanged += gcnew System::EventHandler(this, &SettingsForm::radioButtonTempC_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(24, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Temperature";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->textBox2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->ForeColor = System::Drawing::Color::White;
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(389, 350);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Neural network";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(363, 34);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Help";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SettingsForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(15, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(363, 26);
			this->textBox1->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::LightGray;
			this->label4->Location = System::Drawing::Point(11, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 20);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Системный промт";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Black;
			this->textBox3->Location = System::Drawing::Point(15, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(363, 26);
			this->textBox3->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::LightGray;
			this->label6->Location = System::Drawing::Point(11, 104);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(312, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Максимальное количество токенов\r\n";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Black;
			this->textBox2->Location = System::Drawing::Point(15, 57);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(363, 26);
			this->textBox2->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::LightGray;
			this->label5->Location = System::Drawing::Point(11, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Интелект нейросети";
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(53)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(53)));
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->textBox4);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(389, 350);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Notification";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(10, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(363, 34);
			this->button2->TabIndex = 19;
			this->button2->Text = L"Send";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SettingsForm::button2_Click_1);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Black;
			this->textBox4->Location = System::Drawing::Point(10, 50);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(363, 26);
			this->textBox4->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::LightGray;
			this->label7->Location = System::Drawing::Point(6, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Telegram ID";
			// 
			// SaveSettings
			// 
			this->SaveSettings->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(68)), static_cast<System::Int32>(static_cast<System::Byte>(148)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->SaveSettings->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->SaveSettings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveSettings->ForeColor = System::Drawing::Color::White;
			this->SaveSettings->Location = System::Drawing::Point(6, 388);
			this->SaveSettings->Name = L"SaveSettings";
			this->SaveSettings->Size = System::Drawing::Size(389, 34);
			this->SaveSettings->TabIndex = 1;
			this->SaveSettings->Text = L"Save all settings";
			this->SaveSettings->UseVisualStyleBackColor = false;
			this->SaveSettings->Click += gcnew System::EventHandler(this, &SettingsForm::SaveSettings_Click);
			// 
			// SettingsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(402, 429);
			this->Controls->Add(this->SaveSettings);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SettingsForm";
			this->Text = L"Settings";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}

	private: System::Void radioButtonTempC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set1;
		weat_set1.setTempC();
	}

	private: System::Void radioButtonTempF_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set2;
		weat_set2.setTempF();
	}

	private: System::Void radioButtonWindMC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set3;
		weat_set3.setWindMc();
	}

	private: System::Void radioButtonWindKM_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set4;
		weat_set4.setWindKm();
	}

	private: System::Void radioButtonWindMil_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set5;
		weat_set5.setWindMil();
	}

	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather set_weat;
		std::string setting_chat_id = msclr::interop::marshal_as<std::string>(textBox4->Text);
		set_weat.setChatId(setting_chat_id);

		GetWeather::TelegramMessage telegram;
		telegram.dataAcquisitionWeather();
		telegram.createMessageUser();
		telegram.dataServerTelegram();
	}

	private: System::Void radioButtonPressureMM_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set_pressure;
		weat_set_pressure.setPressureMmRt();
	}

	private: System::Void radioButtonPressureMBAR_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather weat_set_pressure1;
		weat_set_pressure1.setPressureMbar();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("В Интелект нейросети нужно указать дипазон от 0,1 до 0,9.\n"
			+ "В максимальное количество токенов вводить диапозон от 20 до 150.\n" +
			"В системный промт нужно ввести текст с инструкцией как будет вести себя нейросеть.");
	}

	private: System::Void SaveSettings_Click(System::Object^ sender, System::EventArgs^ e) {
		GetWeather::SettingsWeather set_weat_uu;

		if (Convert::ToString(textBox2->Text) != "") {
			double settings_temp_uu = System::Convert::ToDouble(textBox2->Text);
			set_weat_uu.setTemperatureUu(settings_temp_uu);
		}
		else if (Convert::ToString(textBox1->Text) != "") {
			std::string settings_system_promt = msclr::interop::marshal_as<std::string>(textBox1->Text);
			set_weat_uu.setSystemPromt(settings_system_promt);
		}
		else if (Convert::ToString(textBox3->Text) != "") {
			set_weat_uu.setMaxTokensUu(System::Convert::ToInt32(textBox3->Text));
		}

		this->Close();
	}
	};
}