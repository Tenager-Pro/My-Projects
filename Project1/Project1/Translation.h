#pragma once
#include <string>
#include<fstream>
#include "source.h"
#include <sstream>
#include <vector>
#include<iostream>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Translation
	/// </summary>
	public ref class Translation : public System::Windows::Forms::Form
	{
	public:
		Translation(void)
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
		~Translation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Translation::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(174, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Перевод";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 58);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Номер счета \r\nотправителя:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 235);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(102, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Сумма:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(210, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(255, 34);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(210, 235);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(255, 34);
			this->textBox2->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(295, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 43);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Перевести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Translation::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 154);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(179, 58);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Номер счета \r\nполучателя:";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(210, 167);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(255, 34);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Translation::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(17, 294);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 43);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Translation::button2_Click);
			// 
			// Translation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->ClientSize = System::Drawing::Size(535, 358);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Translation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Перевод";
			this->Load += gcnew System::EventHandler(this, &Translation::Translation_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {



		//функция перевода денег
		int kon;
		double sum = 0.0;
		int i = 0;
		std::string arr[4];
		std::string str1;
		std::ifstream inFile;
		//добавить  проверку пустая  ли строка
		if (textBox3->Text == ""|| textBox2->Text == "") {
			MessageBox::Show("Ошибка ввода.Повторите ввод", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			//функция внести денег


			inFile.open("next.txt");
			getline(inFile, str1);

			i = 0;
			std::stringstream ssin(str1);
			while (ssin.good() && i < 4) {
				ssin >> arr[i];
				++i;
			}
			int num = stoi(arr[0]);
			double nt;
			String^ str_3;
			String^ str_2;
			
			str_2 = textBox2->Text;
			str_3 = textBox3->Text;

			if ((System::Double::TryParse(str_2, nt)) && (System::Double::TryParse(str_3, nt))) {
				sum = Convert::ToDouble(textBox2->Text);
				kon = Convert::ToInt32(textBox3->Text);

				if (translation(num, kon, sum, 2) == 0) {
					translation(kon, kon, sum, 1);
					Windows::Forms::MessageBox::Show("Перевод выполнен", "Перевод", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Information);
					Close();
				}

			}
			else {
				MessageBox::Show("Ошибка ввода.Повторите ввод", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		


	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Translation_Load(System::Object^ sender, System::EventArgs^ e) {




	int sum = 0;
	int i = 0;
	std::string arr[4];
	std::string str1;
	std::ifstream inFile;
	
		inFile.open("next.txt");
		getline(inFile, str1);

		i = 0;
		std::stringstream ssin(str1);
		while (ssin.good() && i < 4) {
			ssin >> arr[i];
			++i;
		}
		int num = stoi(arr[0]);
		
		textBox1->Text = Convert::ToString(num);


	

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();

}
};
}
