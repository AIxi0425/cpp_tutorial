/*
 * Input/output with files
 */

#define SEG2

/***************************/
#ifdef SEG1

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile("example.txt");
	if (myfile.is_open())
	{
		myfile << "This is a line.\n";
		myfile << "This is another line.\n";
		myfile.close();
	}
	else
		cout << "Unable to open file! " << endl;

	return 0;
}

/***************************/
#elif defined SEG2

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	ifstream myfile("example.txt");
	if (myfile.is_open())
	{
		while (getline(myfile,line))
			cout << line << endl;
		myfile.close();
	}
	else
		cout << "Unable to open file! " << endl;

	return 0;
}

/***************************/

#endif
