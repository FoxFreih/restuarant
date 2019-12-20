
#ifndef __TEST_H__
#define __TEST_H__


#include <iostream>
#include <time.h>
#include <windows.h>

#define FUNC(A,B) ((A)*(B))

inline void testCase1()
{
	time_t startTime;
	
	//Option 1
	time(&startTime); // return the time of secounds , also can take point to set the return on it.
	//Option 2
	// startTime = time(NULL);
	std::cout << "Start Time is : " << startTime << std::endl;


	// sleep for 10 secounds
	/*
	// Sleep take time in milleseounds
	1 seound = 1000 millieseond

	*/
	Sleep(2000);

	// if less than 2 hours
	if (time(NULL) - startTime <= 72000)
	{
		//still eating
	}
	else {
		// times over
	}
	std::cout<< "Wait for  " <<time(NULL) - startTime <<" Secounds"<<std::endl;

	std::cout << FUNC(1+2, 3+2) << std::endl;
	std::cout << 1 + 2 * 3 + 2 << std::endl;

}

inline void runAllTests()
{
	testCase1();
}


#endif /* __TEST_H__ */
