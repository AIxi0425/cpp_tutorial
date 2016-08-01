/*
 * Exceptions
 */

#define SEG1

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

int main()
{
	try
	{
		throw 20;
	}
	catch(int e)
	{
		cout << "An exception occurred. Exception Nr. " << e << endl;
	}

	return 0;
}

/***************************/

#endif
