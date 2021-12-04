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
	/// Сводка для Take
	/// </summary>
	public ref class Take : public System::Windows::Forms::Form
	{
	public:
		Take(void)
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
		~Take()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ TakeToolStripMenuItem;
	protected:

	private: System::Windows::Forms::ToolStripMenuItem^ InsertToolStripMenuItem;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Take::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->TakeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->InsertToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->TakeToolStripMenuItem,
					this->InsertToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(442, 40);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// TakeToolStripMenuItem
			// 
			this->TakeToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TakeToolStripMenuItem->Name = L"TakeToolStripMenuItem";
			this->TakeToolStripMenuItem->Size = System::Drawing::Size(97, 36);
			this->TakeToolStripMenuItem->Text = L"Снять";
			// 
			// InsertToolStripMenuItem
			// 
			this->InsertToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InsertToolStripMenuItem->Name = L"InsertToolStripMenuItem";
			this->InsertToolStripMenuItem->Size = System::Drawing::Size(110, 36);
			this->InsertToolStripMenuItem->Text = L"Внести";
			this->InsertToolStripMenuItem->Click += gcnew System::EventHandler(this, &Take::внестиToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(293, 218);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Снять";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Take::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(26, 218);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 38);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Меню";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Take::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(23, 134);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Сумма: ";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(196, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 34);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(131, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 55);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Снять";
			this->label2->Click += gcnew System::EventHandler(this, &Take::label2_Click);
			// 
			// Take
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->ClientSize = System::Drawing::Size(442, 285);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Take";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Take";
			this->Load += gcnew System::EventHandler(this, &Take::Take_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}

private: System::Void внестиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Take_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	//функция снятие денег
	double sum = 0.0;
	int i = 0;
	std::string arr[4];
	std::string str1;
	std::ifstream inFile;
	//добавить  проверку пустая  ли строка
	if (textBox1->Text == "") {
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
		

		if ((System::Double::TryParse(str_1, nt))) {
			sum = Convert::ToDouble(textBox1->Text);
			deposit_withdraw(num, sum, 2);
		
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
