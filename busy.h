#ifndef __BUSY_H__
#define __BUSY_H__
#include"tableStatus.h"
#include <Windows.h>
#include <iostream>
class Busy:public TableStatus
{
public:
	Busy();
	~Busy();
	void print()
	{
		std::cout << "I am Busy::print" << std::endl;
	}
	int getStam() {
		std::cout << "getStam" << std::endl;
		return 2;
	}
private:
};
inline Busy::Busy() :TableStatus(BUSY)
{

}
inline Busy::~Busy()
{

}

#endif 

