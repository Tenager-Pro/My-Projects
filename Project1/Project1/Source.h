

#include<string>



class account
{
	int acno;
	std::string name;
	double deposit;

	int password;
public:
	void create_account(int, double, int,std::string);	//функция для получения данных от пользователя

	
	void dep(double);	//функция для приема суммы и добавления к сумме баланса
	void draw(double);	//функция для принятия суммы и вычитания из суммы баланса
	void report() const;	//функция для отображения данных в табличном формате
	int retpass() const;
	int retacno() const;	//функция для возврата номера счета
	double retdeposit() const;	//функция возврата суммы баланса
	std::string retname() const;
	void setName(std::string);
	void setAcno(int);
	void setPassword(int);
	void setDeposit(double);
};         //class ends here

void write_account(int,int, double, std::string);	//function to write record in binary file

void delete_account(int);	//function to delete record of file

void deposit_withdraw(int, double,int);
bool translation(int, int, double,int);// функция для внесения/вывода суммы на данный счет

int authorithation(int, int);
int check();
account finded(int);
bool is_digits(std::string);
std::string& Convert_String_to_string(System::String^ s, std::string& os); //конвертируем System::string^ в std::string
System::String^ Convert_string_to_String(std::string& os, System::String^ s); //конвертируем std::string в System::string^
std::string& Convert_String_to_string(System::String^ s); //конвертируем System::string^ в std::string
System::String^ Convert_string_to_String(std::string& os); //конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch); //конвертируем char* в System::string^
char* Convert_String_to_char(System::String^ string); //конвертируем System::string^ в char*#pragma once

#pragma once
