#ifndef __RESERVED_H__
#define __RESERVED_H__
#include "area.h"
#include"tableStatus.h"
#include <Windows.h>
#include <iostream>

class Reserved:public TableStatus
{
public:
	Reserved(/*set value to area */);
	Reserved(bool flag);
	~Reserved();
	void print()
	{
		std::cout << "I am Reserved::print" << std::endl;
	}
	size_t getArea();
private:
	Area *m_ar; //  1- pointer to exsit object
};


inline Reserved::Reserved() :TableStatus(RESERVED)
{

}

inline Reserved::~Reserved(){}
inline Reserved::Reserved(bool flag)
{
	//this->m_ar = m_ar->getAreaId;
}
inline size_t Reserved::getArea()
{
	return m_ar->getAreaId();
}
#endif




// 13:00 -> some one made a call
// after 2 hours i will come.

//system-> startTime = 13:00(in millesecounds) + 2*60*60*1000 -> time of arrive 
/*
// if time(NULL) - startTime == 0 {
	// start taking the table
	
	}
else if (time(NULL) - startTime < 0)
{
	// 
}

else {
	if(time(NULL) - startTime - TIMEOUT == 0)
	{
		Done From Table
	}
	else{
		complete eating

	}

}
*/