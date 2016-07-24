/*
 * Classes
 */

#define SEG6

/***************************/

#ifdef SEG1
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
  	void set_values (int, int);
	int area()
	{
		return width * height;
	}
};

void Rectangle::set_values (int x, int y)
{
	width = x;
	height = y;
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
	int width, height;
public:
	Rectangle (int, int);
	int area ()
	{
		return width * height;
	}
};

Rectangle::Rectangle (int x, int y)
{
	width = x;
	height = y;
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
	int width, height;
public:
	Rectangle ();
	Rectangle (int, int);
	int area (void)
	{
		return width * height;
	}
};

Rectangle::Rectangle ()
{
	width = 5;
	height = 5;
}

Rectangle::Rectangle (int x, int y)
{
	width = x;
	height = y;
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

/***************************/

#elif defined SEG5
#include <iostream>
using namespace std;

class Circle {
	double radius;
public:
	Circle (double r)
	{
		radius = r;
	}
	double area()
	{
		return radius * radius * 3.14;
	}
};

class Cylinder {
	Circle base;
	double height;
public:
	Cylinder (double r, double h): base(r),height(h)
	{

	}
	double volume ()
	{
		return base.area() * height;
	}
};

int main()
{
	Cylinder foo (10,20);

	cout << "foo's volume is " << foo.volume() << endl;

	return 0;
}

/***************************/

#elif defined SEG6
#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle (int x, int y) : width(x),height(y) {}
	int area (void)
	{
		return width * height;
	}
};

int main()
{
	Rectangle obj(3,4);
	Rectangle *foo;
	foo = &obj;
	cout << "obj's area: " << obj.area() << endl;
	cout << "foo's area: " << foo->area() << endl;
	Rectangle *bar;
	bar = new Rectangle (5,6);
	cout << "*bar's area: " << bar->area() << endl;
	delete bar;
	Rectangle *baz;
	baz = new Rectangle[2] {{3,5},{4,6}};
	cout << "baz[0]'s area: " << (baz+0)->area() << endl;
	cout << "baz[1]'s area: " << baz[1].area() << endl;

	return 0;	
}
#endif
