#pragma once



#include<string>
#include<fstream>


#include <sstream>

#include<iostream>
#include "Translation.h"
#include "Take.h"
#include "Insert.h"
#include "NewPeople.h"

#include"Source.h"

using namespace std;
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(406, 321);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"�������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(215, 321);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 40);
			this->button2->TabIndex = 1;
			this->button2->Text = L"�����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(24, 321);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 40);
			this->button3->TabIndex = 2;
			this->button3->Text = L"������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(24, 12);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 50);
			this->button4->TabIndex = 3;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(179, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(264, 193);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(496, 12);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 50);
			this->button5->TabIndex = 5;
			this->button5->Text = L"�";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 219);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"����:";
			this->label1->Click += gcnew System::EventHandler(this, &Main::label1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(212, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 32);
			this->label2->TabIndex = 7;
			this->label2->Text = L"���:";
			this->label2->Click += gcnew System::EventHandler(this, &Main::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(403, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 32);
			this->label3->TabIndex = 8;
			this->label3->Text = L"������:";
			this->label3->Click += gcnew System::EventHandler(this, &Main::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(403, 265);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 32);
			this->label4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(212, 265);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 32);
			this->label5->TabIndex = 10;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(18, 265);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 32);
			this->label6->TabIndex = 9;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(97)), static_cast<System::Int32>(static_cast<System::Byte>(171)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->ClientSize = System::Drawing::Size(586, 399);
			this->ControlBox = false;
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		
		String^ name;
		string str1;
		int i;
		string arr[4];
		ifstream File("next.txt", ios::in);

		getline(File, str1);

		i = 0;
		stringstream ssin(str1);
		while (ssin.good() && i < 4) {
			ssin >> arr[i];
			++i;
		}
		int num = stoi(arr[0]);
		int por = stoi(arr[2]);
		double den = stold(arr[3]);
		string nam = arr[1];
		
		
	
		this->label6->Text = Convert::ToString(num);//��������� label
		this->label5->Text = Convert_string_to_String(nam,name);
		this->label4->Text= Convert::ToString(den); 
		if (num == 0) {

			button1->Visible = false;
			button2->Visible = false;
			button3->Visible = false;
		}
		else {
			button4->Visible = false;
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		
		if (check() != 0) {
			this->Hide();
			(gcnew Translation)->ShowDialog();
			this->Visible = true;
			String^ name;
			string str1;
			int i;
			string arr[4];
			ifstream File("next.txt", ios::in);

			getline(File, str1);

			i = 0;
			stringstream ssin(str1);
			while (ssin.good() && i < 4) {
				ssin >> arr[i];
				++i;
			}
			int num = stoi(arr[0]);
			int por = stoi(arr[2]);
			double den = stod(arr[3]);
			string nam = arr[1];



			this->label6->Text = Convert::ToString(num);//��������� label
			this->label5->Text = Convert_string_to_String(nam, name);
			this->label4->Text = Convert::ToString(den);
		}
		else {
			MessageBox::Show("��� ����", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
			

			if (check() != 0) {
				this->Hide();
				(gcnew Take)->ShowDialog();
				this->Visible = true;
				String^ name;
				string str1;
				int i;
				string arr[4];
				ifstream File("next.txt", ios::in);

				getline(File, str1);

				i = 0;
				stringstream ssin(str1);
				while (ssin.good() && i < 4) {
					ssin >> arr[i];
					++i;
				}
				int num = stoi(arr[0]);
				int por = stoi(arr[2]);
				double den = stod(arr[3]);
				string nam = arr[1];



				this->label6->Text = Convert::ToString(num);//��������� label
				this->label5->Text = Convert_string_to_String(nam, name);
				this->label4->Text = Convert::ToString(den);
			}
			else {
				MessageBox::Show("��� ����", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

	}

		   
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (check() != 0) {
			this->Hide();
			(gcnew Insert)->ShowDialog();
			this->Visible = true;
			String^ name;
			string str1;
			int i;
			string arr[4];
			ifstream File("next.txt", ios::in);

			getline(File, str1);

			i = 0;
			stringstream ssin(str1);
			while (ssin.good() && i < 4) {
				ssin >> arr[i];
				++i;
			}
			int num = stoi(arr[0]);
			int por = stoi(arr[2]);
			double den = stod(arr[3]);
			string nam = arr[1];



			this->label6->Text = Convert::ToString(num);//��������� label
			this->label5->Text = Convert_string_to_String(nam, name);
			this->label4->Text = Convert::ToString(den);
		}
		else {
			MessageBox::Show("��� ����", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (check() == 0) {
		this->Hide();
		(gcnew NewPeople)->ShowDialog();
		this->Visible = true;
		
	}
	else {
		MessageBox::Show("��� ����", "EROR", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
