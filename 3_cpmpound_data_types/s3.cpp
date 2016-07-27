/*
 * Pointers
 */

#define SEG4

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

int main()
{
	int firstvalue = 5, secondvalue =15;
	int *p1, *p2;
	
	p1 = &firstvalue;
	p2 = &secondvalue;
	*p1 = 10;
	*p2 = *p1;
	p1 = p2;
	*p1 = 20;

	cout << "firstvalue is " << firstvalue << endl;
	cout << "secondvalue is " << secondvalue << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

int main()
{
	int numbers[5];
	int *p;

	p = numbers; *p = 10;
	p++; *p = 20;
	p = &numbers[2]; *p = 30;
	p = numbers + 3; *p = 40;
	p = numbers; *(p+4) = 50;

	for (int n = 0; n < 5; n++)
	{
		cout << numbers[n] << endl;
	}

	return 0;
}

/***************************/
#elif defined SEG3

#include <iostream>
using namespace std;

void increment_all (int *start, int *stop)
{
	int *current = start;
	while (current != stop){
		++(*current);
		++current;
	}
}

void print_all(const int *start, const int *stop)
{
	const int * current = start;
	while (current != stop){
		cout << *current << endl;
		++current;
	}

}
int main()
{
	int numbers[] = {100,1000,10000};
	increment_all (numbers,numbers+3);
	print_all (numbers,numbers+3);

	return 0;
}

/***************************/
#elif defined SEG4

#include <iostream>
using namespace std;

void increase (void *data, int psize)
{
	if (psize == sizeof(char))
	{
		char *pchar;
		pchar = (char *)data;
		++(*pchar);
	}
	if (psize == sizeof(int))
	{
		int *pint;
		pint = (int *)data;
		++(*pint);
	}
}
int main()
{
	char a = 'x';
	int b =1603;
	increase (&a, sizeof(a));
	increase (&b, sizeof(b));
	cout << a << endl;
	cout << b << endl;

	return 0;
}

/***************************/

#endif
