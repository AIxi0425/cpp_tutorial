/*
 * Classes
 */

#define SEG1

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
#endif
