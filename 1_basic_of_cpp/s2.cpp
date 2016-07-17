/*
 * Variables and types
 */

#define SEG3
/***************************/
#ifdef SEG1
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int result;
	
	a = 5;
	b = 2;
	a = a + 1;
	result = a - b;

	cout << result;
	
	/* terminate the program */
	return 0;
}
/***************************/
#elif defined SEG2
#include <iostream>
using namespace std;

int main()
{
	int a = 5;     // initial value:5
	int b(3);      // initial value:3
	int c{2};      // initial value:2
	int result;    // initial value undetermined

	a = a + b;
	result = a - c;
	cout << result;
	
	/* type deduction: auto and decltype */
	int foo = 0;
	auto bar = foo;    // the same as: int bar = foo;
	int foo = 0;
	decltype(foo) bar; // the sme as: int bar;

	return 0;
}
/***************************/
#elif defined SEG3
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystring;
	mystring = "This is the initial string content";
	cout << mystring << endl;
	mystring = "This is a different string content";
	cout << mystring << endl;
	
	return 0;
}
#endif
