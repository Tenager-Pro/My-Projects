
#include<string>
#include<fstream>
#include<cctype>
#include<iomanip>
#include "Source.h"
#include <sstream>
#include <vector>
#include<iostream>


using namespace System;
using namespace std;

//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************

void account::setName(std::string name)
{
	this->name = name;

}

void account::setAcno(int acno)
{
	this->acno = acno;

}

void account::setDeposit(double deposit)
{
	this->deposit = deposit;

}
void account::setPassword(int password)
{
	this->password = password;

}




void account::create_account(int x, double y, int z, string name)
{
	acno = x;
	name.assign(name);
	password = z;
	
	deposit = y;
}





void account::dep(double x)
{
	deposit += x;
}

void account::draw(double x)
{
	deposit -= x;
}

void account::report() const
{
	cout << acno << setw(25) << name << setw(25) << deposit << endl;
}

int account::retpass() const
{
	return password;
}
int account::retacno() const
{
	return acno;
}

double account::retdeposit() const
{
	return deposit;
}

string account::retname() const
{
	return name;
}




//***************************************************************
//    	function declaration
//****************************************************************











int check() {


	string str1;
	int i;
	string arr[4];
	ifstream File("next.txt", ios::in );
	getline(File, str1);

	i = 0;
	stringstream ssin(str1);
	while (ssin.good() && i < 4) {
		ssin >> arr[i];
		++i;
	}
	int num = stoi(arr[0]);
	return num; 
}	




int	 authorithation(int x,int y) {
	string str1;
	int i;
	bool found = false;
	string arr[4];
	account ac;
	fstream File;
	int n;
	
	// admin
	if (x == 0) {
		if (y == 0) {
			ofstream outFile;
			outFile.open("next.txt", ios::out);
			outFile << "0" << " " << "admin" << " " << "0" << " " << "0";
			outFile.close();
			return 0;
		}
		
	}
	// people
	else {


		ifstream File("account.txt", ios::in | ios::out);
		if (!File)
		{
			Windows::Forms::MessageBox::Show("Файл не может быть открыт", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);

		}
		else {
			while (!File.eof() && found == false)
			{
				
				getline(File,str1);
				
				i = 0;
				stringstream ssin(str1);
				while (ssin.good() && i < 4) {
					ssin >> arr[i];
					++i;
				}
				int num = stoi(arr[0]);
				int por = stoi(arr[2]);
				double den = stod(arr[3]);

				
				ac.setName(arr[1]);
				ac.setAcno(num);
				ac.setPassword(por);
				ac.setDeposit(den);
				if (ac.retacno() == x)
				{

						if (ac.retpass() == y) {

							found = true;


							
							ofstream outFile;
							outFile.open("next.txt", ios::out);
							outFile << num << " " << arr[1] << " " << por << " " << den;
							outFile.close();


							return ac.retacno();
						}
					
				}
				
				
			}
			File.close();
			if (found == false) {
				Windows::Forms::MessageBox::Show("Ошибка. Пользователь не существует", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
				return -1;
			}
		}
	
	
	
	
	}
	Windows::Forms::MessageBox::Show("Ошибка вода.Повторите ввод", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
	return -1;
}
//***************************************************************
//    	функция для записи в файл
//****************************************************************


void write_account(int x, int y, double z, std::string name)
{
	account ac;
	ofstream outFile;
	outFile.open("account.txt", ios::app);

	ac.create_account(x, y, z, name);
	outFile<<"\n" << x << " " << name << " " << y << " " << z;
	outFile.close();
}
















bool translation(int n,int x, double bal, int option)
{

	bool found = false;
	int i = 0;
	int j = 0;
	ifstream inFile;
	ofstream outFile;
	ofstream outFile2;
	string arr[4];
	string str1;

	inFile.open("account.txt");
	
	
	account ac;
	
	ac= finded(x);
	
	if (ac.retacno()>=0) {
		//ac
					
		
		if (option == 1)
		{
		


			ac.dep(bal);
		}
		if (option == 2)
		{


			if (ac.retdeposit() >= bal) {
				ac = finded(n);
				ac.draw(bal);
				outFile2.open("next.txt", ios::out);
				outFile2 << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
				outFile2.close();
			}
			else {

				Windows::Forms::MessageBox::Show("Баланса недостаточно", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
				found = true;
				return found;
			}
		}

		j = 0;
		
		outFile.open("Trans.txt");
	
		inFile.seekg(0, ios::beg);
	
		while (!inFile.eof())
		{

			getline(inFile, str1);

			i = 0;
			stringstream ssin(str1);
			while (ssin.good() && i < 4) {
				ssin >> arr[i];
				++i;
			}
			int num = stoi(arr[0]);
			if (num != n)
			{
				if (j == 0) {
					outFile << str1;

				}
				else {
					outFile << "\n" << str1;
				}

			}
			else {

				

				if (j == 0) {
					outFile << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
					
				}
				else {
					outFile << "\n" << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
					
				}


			}


			j += 1;
		}



		inFile.close();
		outFile.close();
	
		remove("account.txt");
		rename("Trans.txt", "account.txt");



		return found;
	
		

	}
	else {
	

		found = true;
		return found;
	}


	

}


//***************************************************************
//    	функция для удаления записи файла
//****************************************************************


void delete_account(int n)
{
	int j=0;
	int i;
	account ac;
	ifstream inFile;
	ofstream outFile;
	string arr[4];
	string str1;
	inFile.open("account.txt");
	if (!inFile)
	{
		Windows::Forms::MessageBox::Show("Файл не может быть открыт", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
		return;
	}
	outFile.open("Temp.txt");
	inFile.seekg(0, ios::beg);
	while (!inFile.eof())
	{
		
		getline(inFile, str1);

		i = 0;
		stringstream ssin(str1);
		while (ssin.good() && i < 4) {
			ssin >> arr[i];
			++i;
		}
		int num = stoi(arr[0]);


		if (num != n)
		{
			if (j == 0) {
				outFile <<  str1;
				j += 1;
			}
			else {
				outFile << "\n" << str1;
			}
			
		}
	}
	inFile.close();
	outFile.close();
	remove("account.txt");
	rename("Temp.txt", "account.txt");
	Windows::Forms::MessageBox::Show("Запись удалена", "Delete", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Information);
}







//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew System::String(os.c_str());

	return s;
}

//конвертируем System::string^ в std::string
std::string& Convert_String_to_string(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}

//конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os) {
	System::String^ s = gcnew System::String(os.c_str());

	return s;
}

//конвертируем char в System::string^
System::String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch);
	return str;
}

//конвертируем System::string^ в char*
char* Convert_String_to_char(System::String^ string) {
	using namespace System::Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

//конвертируем char* в System::string^
System::String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	System::String^ str;
	for (int i = 0; chr[i] != '\0'; i++)
		str += wchar_t(ch[i]);
	return str;
}
//***************************************************************
//    	function to deposit and withdraw amounts
//****************************************************************







bool is_digits(const std::string& str)
{
	return str.find_first_not_of("0123456789") == std::string::npos;
}



void deposit_withdraw(int n, double bal, int option)
{
	int i = 0;
	int j = 0;
	ifstream inFile;
	ofstream outFile;
	ofstream outFile2;
	string arr[4];
	string str1;

	inFile.open("account.txt");

	
	account ac;
	ac=finded(n);
	//ac
	if (option == 1)
	{
		
		
		ac.dep(bal);
	}
	if (option == 2)
	{
				
			
		if (ac.retdeposit() >= bal) {

			ac.draw(bal);
		}
		else {

			Windows::Forms::MessageBox::Show("Баланса недостаточно", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
			
		}
	}

	j = 0;
	outFile.open("Money.txt");
	outFile2.open("next.txt", std::ios::out);
	inFile.seekg(0, ios::beg);

	while (!inFile.eof())
	{
		
		getline(inFile, str1);

		i = 0;
		stringstream ssin(str1);
		while (ssin.good() && i < 4) {
			ssin >> arr[i];
			++i;
		}
		int num = stoi(arr[0]);
		if (num != n)
		{
			if (j == 0) {
				outFile << str1;
				
			}
			else {
				outFile << "\n" << str1;
			}

		}
		else {

			if (j == 0) {
				outFile << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
				outFile2 << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
			}
			else {
				outFile << "\n" << ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
				outFile2 <<  ac.retacno() << " " << ac.retname() << " " << ac.retpass() << " " << ac.retdeposit();
			}

		
		}


		j += 1;
	}



	inFile.close();
	outFile.close();
	outFile2.close();
	remove("account.txt");
	rename("Money.txt", "account.txt");
	if (option == 1) {
		Windows::Forms::MessageBox::Show("Баланс пополнен", "Insert", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Information);
	}
	else {
		Windows::Forms::MessageBox::Show("Списывание с баланса произведенно", "Take", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Information);
	}



}



account finded(int n)
{
	account al;
	string str1;
	int i;
	bool found = false;
	string arr[4];
	ifstream File("account.txt", ios::in);
	if (!File)
	{
		Windows::Forms::MessageBox::Show("Файл не может быть открыт", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);

	}
	else {
		while (!File.eof() && found == false)
		{

			getline(File, str1);

			i = 0;
			stringstream ssin(str1);
			while (ssin.good() && i < 4)
			{
				ssin >> arr[i];
				++i;
			}
			int num = stoi(arr[0]);
			int por = stoi(arr[2]);
			double den = stod(arr[3]);


			al.setName(arr[1]);
			al.setAcno(num);
			al.setPassword(por);
			al.setDeposit(den);
			if (num == n)
			{

				found = true;
			}

		}
		if (found == true)
		{

			return al;
		}
		else {
			al.setName("Undef");
			al.setAcno(-5);
			al.setPassword(0);
			al.setDeposit(0.0);
			Windows::Forms::MessageBox::Show("Пользователь не существует", "EROR", Windows::Forms::MessageBoxButtons::OK, Windows::Forms::MessageBoxIcon::Error);
			return al;

		}
		File.close();
	}

}
	//***************************************************************
	//    			END OF PROJECT
	//***************************************************************

			
			






