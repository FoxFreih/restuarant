#include "table.h"
#include "busy.h"
#include "reserved.h"
#include "area.h"
#include "customer.h"
#include"order.h"
#include <iostream>
#include<string.h>
#include<vector>
using namespace std;
using std::vector;

int Area::s_id = 100;

int main()
{
	vector<Table>tables;
	vector<Reserved>orders;
	vector<Customer>customers;
	vector<int>adj;
	Table T1(6);
	Table T2;
	Customer c1("Fox", "Freih","0529523453","amal@gmail.com",6);
	Busy busy;
	Reserved reserved;
	Area area(1);

	Reserved r(&area);
	Order ord(T1,c1,"12/10/19");
	T1.setTableStatus(&busy);
	T1.getTableStatus()->print();
	T1.stam();
	tables.push_back(T1);
	T2.setTableStatus(&reserved);
	T2.getTableStatus()->print();
	tables.push_back(T2);
	//T1.stam();

	//T1.setTableStatus(&r);
	//T1.getTableStatus()->print;
	c1.print();

	return 0;
}


/*Area area(..);
Reserved r(&area);
*/