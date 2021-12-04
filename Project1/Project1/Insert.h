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
	/// Сводка для Insert
	/// </summary>
	public ref class Insert : public System::Windows::Forms::Form
	{
	public:
		Insert(void)
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
		~Insert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ снятьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ внестиToolStripMenuItem;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Insert::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->снятьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->внестиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(166, 127);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 34);
			this->textBox1->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(7, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 29);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Сумма: ";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 216);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 38);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Insert::button2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(226, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(134, 38);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Внести";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Insert::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->снятьToolStripMenuItem,
					this->внестиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(380, 40);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// снятьToolStripMenuItem
			// 
			this->снятьToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->снятьToolStripMenuItem->Name = L"снятьToolStripMenuItem";
			this->снятьToolStripMenuItem->Size = System::Drawing::Size(97, 36);
			this->снятьToolStripMenuItem->Text = L"Снять";
			this->снятьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Insert::снятьToolStripMenuItem_Click);
			// 
			// внестиToolStripMenuItem
			// 
			this->внестиToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->внестиToolStripMenuItem->Name = L"внестиToolStripMenuItem";
			this->внестиToolStripMenuItem->Size = System::Drawing::Size(110, 36);
			this->внестиToolStripMenuItem->Text = L"Внести";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(99, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(189, 55);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Внести";
			this->label2->Click += gcnew System::EventHandler(this, &Insert::label2_Click);
			// 
			// Insert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->ClientSize = System::Drawing::Size(380, 285);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Insert";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Insert";
			this->Load += gcnew System::EventHandler(this, &Insert::Insert_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Insert_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void снятьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	double sum = 0;
	int i = 0;
	std::string arr[4];
	std::string str1;
	std::ifstream inFile;
	//добавить  проверку пустая  ли строка
	if (textBox1->Text == "" ) {
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

		String^ str_1;
		str_1 = textBox1->Text;



		if (System::Double::TryParse(str_1, nt)) {
			sum = Convert::ToDouble(textBox1->Text);
			deposit_withdraw(num, sum, 1);
			Close();
		}
		else {
			MessageBox::Show("Ошибка ввода.Повторите ввод", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
		}
	}
	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
