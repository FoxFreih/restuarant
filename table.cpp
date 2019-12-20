#include "table.h"

size_i Table::s_count = 0;

Table::Table(size_i chairsNumber):m_amountOfChairs(chairsNumber),m_tableId(s_count++)
{
	m_tableStatus = NULL;
}

//check
Table::~Table()
{
	size_t size = m_tables.size();
	for (size_t i = 0; i < size; ++i)
		delete m_tables[i];

}

void Table::addTable(Table *other)
{
	m_tables.push_back(other);
}

vector<Table*> Table::getAllTables()
{
	return vector<Table*>();
}

void Table::setTableStatus(TableStatus * other)
{
	m_tableStatus = other;
}


// optinal
void Table::resetStatus()
{
	m_tableStatus = NULL;
}

