/*
 * Constants
 */

#define SEG1

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main()
{
	double r = 5.0;
	double circle;
	
	circle = 2 * pi * r;
	cout << circle;
	cout << newline;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main()
{
	double r = 5.0;
	double circle;
	
	circle = 2 * PI * r;
	cout << circle;
	cout << NEWLINE;
}

/***************************/

#endif
