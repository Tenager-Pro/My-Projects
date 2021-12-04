

#include<string>



class account
{
	int acno;
	std::string name;
	double deposit;

	int password;
public:
	void create_account(int, double, int,std::string);	//������� ��� ��������� ������ �� ������������

	
	void dep(double);	//������� ��� ������ ����� � ���������� � ����� �������
	void draw(double);	//������� ��� �������� ����� � ��������� �� ����� �������
	void report() const;	//������� ��� ����������� ������ � ��������� �������
	int retpass() const;
	int retacno() const;	//������� ��� �������� ������ �����
	double retdeposit() const;	//������� �������� ����� �������
	std::string retname() const;
	void setName(std::string);
	void setAcno(int);
	void setPassword(int);
	void setDeposit(double);
};         //class ends here

void write_account(int,int, double, std::string);	//function to write record in binary file

void delete_account(int);	//function to delete record of file

void deposit_withdraw(int, double,int);
bool translation(int, int, double,int);// ������� ��� ��������/������ ����� �� ������ ����

int authorithation(int, int);
int check();
account finded(int);
bool is_digits(std::string);
std::string& Convert_String_to_string(System::String^ s, std::string& os); //������������ System::string^ � std::string
System::String^ Convert_string_to_String(std::string& os, System::String^ s); //������������ std::string � System::string^
std::string& Convert_String_to_string(System::String^ s); //������������ System::string^ � std::string
System::String^ Convert_string_to_String(std::string& os); //������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch); //������������ char* � System::string^
char* Convert_String_to_char(System::String^ string); //������������ System::string^ � char*#pragma once

#pragma once
