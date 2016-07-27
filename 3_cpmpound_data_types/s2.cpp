/*
 * Character sequence
 */

#define SEG1

/***************************/
#ifdef SEG1

#include <iostream>
#include <string>
using namespace std;

int main()
{
	char question1[] = "what is your name? ";
	string question2 = "where do you live? ";
	char answer1[80];
	string answer2;
	cout << question1;
	cin >> answer1;
	cout << question2;
	cin >> answer2;
	cout << "hello," << answer1;
	cout << " from " << answer2 << endl;
	
	char myntcs[] = "some text";
	string mystring = myntcs;
	cout << mystring << endl;
	cout << mystring.c_str() << endl;
	
	return 0;
}

/***************************/

#endif
