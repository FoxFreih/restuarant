#ifndef __AREA_H__
#define __AREA_H__
#include<iostream>
#include <string.h>
using namespace std;
typedef enum{GENERAL,CAFETERIA}AREATYPE;
class Area
{
public:
	Area(bool flag, AREATYPE type = GENERAL);
	~Area();
	bool getAreaStatus();
	size_t getAreaId();
	AREATYPE getAreaType();

private:
	static int s_id;
	size_t m_areaId;
	bool m_open;
	AREATYPE m_type;
};

 

inline Area::Area(bool flag,AREATYPE type)
{
	this->m_areaId = s_id++;
	this->m_open = flag;
	this->m_type = type;
}

inline bool  Area::getAreaStatus()
{
	return this->m_open;
}

inline size_t  Area::getAreaId()
{
	return this->m_areaId;
}

inline AREATYPE  Area::getAreaType()
{
	return this->m_type;
}
inline Area::~Area()
{

}
#endif


