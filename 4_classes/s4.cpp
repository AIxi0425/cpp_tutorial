/*
 * Friendship and inheritance
 */

#define SEG3

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() {}
	Rectangle(int x, int y) : width(x), height(y) {}
	int area() {return width*height;} 
	friend Rectangle duplicate(const Rectangle&);
};

Rectangle duplicate(const Rectangle& param)
{
	Rectangle res;
	res.width = param.width * 2;
	res.height = param.height * 2;
	return res;
}

int main()
{
	Rectangle foo;
	Rectangle bar(2,3);
	foo = duplicate(bar);

	cout << foo.area() << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

class Polygon {
protected:
	int width, height;
public:
	void set_values(int a, int b)
	{
		width = a;
		height = b;
	}
};

class Rectangle: public Polygon {
public:
	int area()
	{
		return width * height;
	}
};

class Triangle: public Polygon {
public:
	int area()
	{
		return width * height / 2;
	}
};

int main()
{
	Rectangle rect;
	Triangle trgl;
	rect.set_values(3,5);
	trgl.set_values(4,5);

	cout << rect.area() << endl;
	cout << trgl.area() << endl;

	return 0;
}

/***************************/
#elif defined SEG3

#include <iostream>
using namespace std;

class Mother {
public:
	Mother()
	{
		cout << "Mother: no parameters\n";
	}
	Mother(int a)
	{
		cout << "Mother: int parameters\n";
	}
};

class Daughter: public Mother {
public:
	Daughter(int a)
	{
		cout << "Daughter: int parameters\n";
	}
};

class Son: public Mother {
public:
	Son(int a): Mother(a)
	{
		cout << "Son: int parameters\n";
	}
};

int main()
{
	Daughter kelly(0);
	Son bud(0);

	return 0;
}

/***************************/

#endif
