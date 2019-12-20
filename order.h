#ifndef __ORDER_H__
#define __ORDER_H__
#include<iostream>
#include<string.h>
#include "table.h"
#include"customer.h"
class Order
{
public:
	Order();
	Order(Table T, Customer C, string date);
	~Order();
	string getTableId();
	string getCustomer();
private:
	Table m_t;
	Customer m_c;
	string m_date;
};

inline Order::Order()
{

}

inline Order::~Order()
{

}
inline Order::Order(Table T, Customer C, string date)
{
	this->m_t = T;
	this->m_c = C;
	this->m_date = date;
}

#endif

