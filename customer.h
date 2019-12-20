#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

#include<iostream>
#include<string>
using namespace std;
class Customer
{
public:
	Customer(string name,string family,string phone,string email,int dinersNumber);
	~Customer();
	Customer();
	string getFirstName();
	string getLastName();
	string getPhoneNumber();
	string getEmail();
	int getDinersNumber();
	void print();

private:
	string m_firstName;
	string m_lastName;
	string m_phoneNumber;
	string m_email;
	int m_dinersNumber; //the amount of diners
};

inline string Customer::getFirstName()
{
	return this->m_firstName;
}

inline string Customer::getLastName()
{
	return this->m_lastName;
}

inline string Customer::getPhoneNumber()
{
	return this->m_phoneNumber;
}

inline string Customer::getEmail()
{
	return this->m_email;
}

inline int Customer::getDinersNumber()
{
	return this->m_dinersNumber;
}

inline Customer::Customer(string name, string family, string phone, string email, int dinersNumber)
{
	this->m_firstName = name;
	this->m_lastName = family;
	this->m_phoneNumber = phone;
	this->m_email = email;
	this->m_dinersNumber = dinersNumber;
}

inline void Customer::print()
{
	cout << "_____ Customer details _____" << endl;
	cout << "firstName:"<< getFirstName().c_str()<< endl;
	cout << "lastName:"<<getLastName().c_str() << endl;
	cout << "phoneNumber:"<<getPhoneNumber().c_str() << endl;
	cout << "email:" << getEmail().c_str() << endl;
}

inline Customer::Customer()
{

}

inline Customer::~Customer()
{
}
#endif

