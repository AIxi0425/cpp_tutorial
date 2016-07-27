/* 
 * Basic Input/Output
 */

#define SEG3

/***************************/
#ifdef SEG1

#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Please enter an integer value: ";
    cin >> i;
    cout << "The value you enterd is " << i;
    cout << " and it's double is " << i*2 << ".\n";

    return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystr;
	cout << "what's your name? ";
	getline(cin,mystr);
	cout << "Hello, " << mystr << ".\n";
	cout << "what's your favorite team? ";
	getline(cin,mystr);
	cout << "I like " << mystr << " too!\n";
	
	return 0;
}

/***************************/
#elif defined SEG3

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string mystr;
	float price = 0;
	int quantity = 0;
	
	cout << "Enter the price: ";
	getline(cin,mystr);
	stringstream(mystr) >> price;
	cout << "Enter the quantity: ";
	getline(cin,mystr);
	stringstream(mystr) >> quantity;
	cout << "Total price: " << price*quantity << endl;
	
	return 0;	
}

/***************************/

#endif
