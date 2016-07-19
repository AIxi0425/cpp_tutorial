/*
 *	Functions
 */

#define SEG2

/***************************/

#ifdef SEG1
#include <iostream>
using namespace std;

void duplicate (int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    int x = 1, y = 2, z =7;
	duplicate(x,y,z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}

/***************************/

#elif defined SEG2
#include <iostream>
using namespace std;

int divide (int a, int b = 2)
{
   int r;
   r = a / b;
   return (r);
}

int main()
{
    cout << divide(12) << endl;
    cout << divide(20,4) << endl;

	return 0;
}
#endif
