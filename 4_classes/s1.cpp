/*
 * Classes
 */

#define SEG4

/***************************/

#ifdef SEG1
#include <iostream>
using namespace std;

class Rectangle {
	int width, heigth;
public:
  	void set_values (int, int);
	int area()
	{
		return width * heigth;
	}
};

void Rectangle::set_values (int x, int y)
{
	width = x;
	heigth = y;
}
int main()
{
	Rectangle rect_a, rect_b;
	rect_a.set_values (3, 4);
	rect_b.set_values (5, 6);
	cout << "rect_a area is " << rect_a.area() << endl;
	cout << "rect_b area is " << rect_b.area() << endl;

	return 0;
}

/***************************/

#elif defined SEG2
#include <iostream>
using namespace std;

class Rectangle {
	int width, heigth;
public:
	Rectangle (int, int);
	int area ()
	{
		return width * heigth;
	}
};

Rectangle::Rectangle (int x, int y)
{
	width = x;
	heigth = y;
}

int main()
{
	Rectangle rect_a(3, 5), rect_b(10, 20);
	cout << "rect_a area is " << rect_a.area() << endl;
	cout << "rect_b area is " << rect_b.area() << endl;

	return 0;
}

/***************************/

#elif defined SEG3
#include <iostream>
using namespace std;

class Rectangle {
	int width, heigth;
public:
	Rectangle ();
	Rectangle (int, int);
	int area (void)
	{
		return width * heigth;
	}
};

Rectangle::Rectangle ()
{
	width = 5;
	heigth = 5;
}

Rectangle::Rectangle (int x, int y)
{
	width = x;
	heigth = y;
}

int main()
{
	Rectangle rect_a;
	Rectangle rect_b (10,10);
	cout << "rect_a area is " << rect_a.area() << endl;
	cout << "rect_b area is " << rect_b.area() << endl;

	return 0;
}

/***************************/

#elif defined SEG4
#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	Circle (double r)
	{
		radius = r;
	}
	double circum()
	{
		return 2 * radius * 3.14;
	}
};

int main()
{
	Circle foo (10.0);    // function form
	Circle bar = 20.0;    // assignment init.
	Circle baz {30.0};    // uniform init.
	Circle qux = {40.0};

	cout << "foo's circumference: " << foo.circum() << endl;
	cout << "bar's circumference: " << bar.circum() << endl;
	cout << "baz's circumference: " << baz.circum() << endl;
	cout << "qux's circumference: " << qux.circum() << endl;

	return 0;
}
#endif
