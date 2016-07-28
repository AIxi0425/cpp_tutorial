/*
 * Specical members
 */

#define SEG4

/***************************/
#ifdef SEG1

#include <iostream>
#include <string>
using namespace std;

class Example3 {
	string data;
public:
	Example3 (const string& str): data(str) {}
	Example3 () {}
	const string& content () const {return data;}
};

int main()
{
	Example3 foo;
	Example3 bar("Example");

	cout << "bar's content: " << bar.content() << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
#include <string>
using namespace std;

class Example4 {
	string *ptr;
public:
	Example4 (): ptr(new string) {}
	Example4 (const string& str): ptr(new string(str)) {}
	~Example4 () {delete ptr;}
	const string& content() const {return *ptr;}
};

int main()
{
	Example4 foo;
	Example4 bar("Example");

	cout << "bar's content: " << bar.content() << endl;

	return 0;
}

/***************************/
#elif defined SEG3

#include <iostream>
#include <string>
using namespace std;

class Example5 {
	string *ptr;
public:
	Example5 (const string& str): ptr(new string(str)) {}
	~Example5 () {delete ptr;}
	Example5 (const Example5& x): ptr(new string(x.content())) {}
	const string& content() const {return *ptr;}
};

int main()
{
	Example5 foo("Example5");
	Example5 bar = foo;

	cout << "bar's content: " << bar.content() << endl;

	return 0;
}

/***************************/
#elif defined SEG4

#include <iostream>
#include <string>
using namespace std;

class Example6 {
	string *ptr;
public:
	Example6 (const string& str): ptr(new string(str)) {}
	~Example6 () {delete ptr;}
	Example6 (Example6&& x): ptr(x.ptr) {x.ptr = nullptr;}
	Example6& operator= (Example6&& x) 
	{
		delete ptr;
		ptr = x.ptr;
		x.ptr = nullptr;
		return *this;
	}
	const string& content() const {return *ptr;}
	Example6 operator+ (const Example6& rhs)
	{
		return Example6(content() + rhs.content());
	}
};

int main()
{
	Example6 foo("Example");
	Example6 bar = Example6("6");

	foo = foo + bar;

	cout << foo.content() << endl;

	return 0;
}

/***************************/

#endif
