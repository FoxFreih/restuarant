#ifndef __TABLE_H__
#define __TABLE_H__

//#include"abstractRequest.h"
#include "tableStatus.h"
#include"reserved.h"
#include"busy.h"
#include <vector>
using std::vector;
typedef unsigned int size_i;
class Table
{
public:
	Table(size_i chairsNumber=4 );
	~Table();
	void addTable(Table * other);
	vector<Table*> getAllTables();
	void setTableStatus(TableStatus * other);
	TableStatus* getTableStatus()
	{
		return this->m_tableStatus;
	}
	bool isTableAvilable();
	void resetStatus();

	void stam()
	{
		// if not null
		if (m_tableStatus)
		{
			if (m_tableStatus->getStatus() == RESERVED)
			{
				Reserved *pr = (Reserved *)m_tableStatus; //down casting
				std::cout<<pr->getArea()<<std::endl;
			}
			else {
				Busy *pr = (Busy *)m_tableStatus; //down casting
				std::cout << pr->getStam() << std::endl;

			}
		}
		else {
			std::cout << "No STATUS" << std::endl;
		}
	}
private:
	size_i m_amountOfChairs;
	size_i m_tableId;
	static size_i s_count;
	TableStatus *m_tableStatus;
	vector<Table*> m_tables; 
	
};

inline bool Table::isTableAvilable()
{
	if (!m_tableStatus)
		return true;
	return false;
}


#endif /* __TABLE_H__ */