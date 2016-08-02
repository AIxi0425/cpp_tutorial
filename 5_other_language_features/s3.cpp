/*
 * Preprocessor directives
 */

#define SEG2

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

#define getmax(a,b) ((a)>(b)?(a):(b))

int main()
{

	int x = 5, y = 7;
	y = getmax(x,2);
	cout << y << endl;
	cout << getmax(7,x) << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

int main()
{
	cout << "compiler_version: " << __cplusplus << endl;
	cout << "this is the line number: " << __LINE__ << endl;
	cout << "file name: " << __FILE__ << endl;
	cout << "Its compilation bagan " << __DATE__;
	cout << " at " << __TIME__ << endl;
	cout << "The compiler gives a __cplusplus value of " << __cplusplus << endl;
	return 0;
}

/***************************/

#endif
