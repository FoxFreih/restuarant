#ifndef __TABLESTATUS_H__
#define __TABLESTATUS_H__
#include<Windows.h>
#include<iostream>
typedef enum { NO_STATUS, BUSY, RESERVED }TABLE_STATUS;

class TableStatus
{
public:
	TableStatus(TABLE_STATUS = NO_STATUS);
	virtual ~TableStatus();
	
	TABLE_STATUS getStatus();
	virtual void print()
	{
		std::cout << "I am TableStatus::print" << std::endl;
	}
	
private:
	//
	TABLE_STATUS m_status;
	time_t m_startTime;
	const char *m_time_details;
	//in miliseconds-->2000 mili to sleep function
	static const int TIMEOUT = 2;
};

inline TABLE_STATUS TableStatus::getStatus()
{
	return m_status;
}


inline TableStatus::TableStatus(TABLE_STATUS status):m_status(status)
{

}

inline TableStatus::~TableStatus()
{
}


#endif



/*struct tm tm;
strptime(time_details, "%H:%M:%S", &tm);
time_t t = mktime(&tm);  // t is now your desired time_t
*/
//static const long TIMEOUT = 72000; i suppose that 2 hours is 2 seconds just to check the program
