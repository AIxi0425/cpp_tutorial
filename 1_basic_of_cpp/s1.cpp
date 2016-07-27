/*
 * Structure of a program
 * this is my first program in C++ 
 */

#define SEG2

/***************************/
#ifdef SEG1

#include <iostream>

int main()
{
    std::cout << "hello,world";
}

/***************************/
#elif defined SEG2

#include <iostream>
using namespace std;

int main()
{
	cout << "I am a C++ program";
}

/***************************/

#endif
