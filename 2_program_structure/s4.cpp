/*
 * Name visibility
 */

#define SEG3

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	{
	    int x;
	    x = 50;
	    y = 50;
	    cout << "inner block" << endl;
	    cout << "x: " << x << endl;
	    cout << "y: " << y << endl;
	}
	
	cout << "outer block" << endl;
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
	
	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

namespace first
{
	int x = 5;
	int y = 10;
}

namespace second
{
	double x = 3.14;
	double y = 2.71;
}

int main()
{
	using namespace first;
	cout << x << endl;
	cout << y << endl;
	cout << second::x << endl;
	cout << second::y << endl;
	
	return 0;
}

/***************************/
#elif defined SEG3
#include <iostream>

using namespace std;

int x;

int main()
{
	int y;
	cout << x << endl;
	cout << y << endl;
	
	return 0;
}

/***************************/

#endif
