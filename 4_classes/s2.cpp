/*
 * Classes(2)
 */

#define SEG6

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

class CVector {
public:
	int x, y;
	CVector () {}
	CVector (int a, int b) : x(a), y(b) {}
	CVector operator+ (const CVector&);
};

CVector CVector::operator+ (const CVector& param)
{
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
}

int main()
{
	CVector foo (3,1);
	CVector bar (4,2);
	CVector result;
	result = foo + bar;
	cout << result.x << "," << result.y << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

class CVector {
public:
	int x, y;
	CVector () {}
	CVector (int a, int b) : x(a), y(b) {}
};

CVector operator+ (const CVector& lhs, const CVector& rhs)
{
	CVector temp;
	temp.x = lhs.x + rhs.x;
	temp.y = lhs.y + rhs.y;
	return temp;
}

int main()
{
	CVector foo (3,1);
	CVector bar (4,2);
	CVector result;
	result = foo + bar;
	cout << result.x << "," << result.y << endl;

	return 0;
}

/***************************/
#elif defined SEG3

#include <iostream>
using namespace std;

class Dummy {
public:
	bool isitme (Dummy& param);
};

bool Dummy::isitme (Dummy& param)
{
	if (&param == this)
		return true;
	else
		return false;
}

int main()
{
	Dummy a;
	Dummy *b = &a;
	if (b->isitme(a))
		cout << "yes, &a is b\n";
	return 0;
}

/***************************/
#elif defined SEG4

#include <iostream>
using namespace std;

class Dummy {
public:
	static int n;
	Dummy ()
	{
		n++;
	}
};

int Dummy::n = 0;

int main()
{
	Dummy a;
	Dummy b[5];
	cout << a.n << endl;
	Dummy *c = new Dummy;
	cout << Dummy::n << endl;
	delete c;

	return 0;
}

/***************************/
#elif defined SEG5

#include <iostream>
using namespace std;

class Myclass {
public:
	int x;
	Myclass (int val): x(val) {}
	int get () 
	{
		return x;
	}
};

int main()
{
	const Myclass foo(10);
	//foo.x = 20; //not valid:  x read-only
	cout << foo.x << endl;

	return 0;
}

/***************************/
#elif defined SEG6

#include <iostream>
using namespace std;

class MyClass {
	int x;
public:
	MyClass (int val): x(val) {}
	const int& get() const {return x;}
};

void print (const MyClass& arg)
{
	cout << arg.get() << endl;
}

int main()
{
	MyClass foo (10);
	print (foo);
	return 0;
}

/***************************/
#elif defined SEG7

#include <iostream>
using namespace std;

class MyClass {
	int x;
public:
	MyClass (int val): x(val) {}
	const int& get() const {return x;}
	int& get() {return x;}
};

int main()
{
	MyClass foo (10);
	const MyClass bar (20);
	foo.get() = 16;
	cout << foo.get() << endl;
	cout << bar.get() << endl;

	return 0;
}

/***************************/
#elif defined SEG8

#include <iostream>
using namespace std;

template <class T>
class mypair {
	T a, b;
public:
	mypair (T first, T second) {a = first; b = second;}
	T getmax();
};

template <class T>
T mypair<T>::getmax()
{
	T retval;
	retval = a>b? a : b;
	return retval;
}

int main()
{
	mypair <int>myobject (100,74);
	cout << myobject.getmax() << endl;

	return 0;
}

/***************************/
#elif defined SEG9

#include <iostream>
using namespace std;

int main()
{
	return 0;
}

/***************************/

#endif
