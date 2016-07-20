/*
 * Overloads and tmplates
 */

#define SEG3

/***************************/

#ifdef SEG1
#include <iostream>
using namespace std;

int operate (int a, int b)
{
    return (a*b);
}

double operate (double a, double b)
{
    return (a/b);
}

int main()
{
    int x = 5, y = 2;   
    double n = 5.0, m = 2.0;
    cout << operate(x, y) << endl;
    cout << operate(n, m) << endl;

    return 0;
}

/***************************/

#elif defined SEG2
#include <iostream>
using namespace std;

int sum (int a, int b)
{
    return a+b;
}

double sum (double a, double b)
{
    return a+b;
}

int main()
{
    cout << sum(10, 20) << endl;
    cout << sum(1.5, 1.0) << endl;

    return 0;
}

/***************************/

#elif defined SEG3
#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b)
{
    T result;
    result = a + b;
    return result;
}

int main()
{
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);
    cout << k << endl;
    cout << h << endl;

    return 0;
}
#endif
