/*
 * Data structure
 */

#define SEG2

/***************************/
#ifdef SEG1

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
} films [3];

void printmovie (movies_t movie);

int main()
{
	
	string mystr;
	int n;

	for (n = 0; n < 3; n++)
	{
		cout << "Enter title: ";
		getline (cin, films[n].title);
		cout << "Enter year: ";
		getline (cin, mystr);
		stringstream (mystr) >> films[n].year;
	}

	cout << "\nYou have entered these movies:\n";

	for (n = 0; n < 3; n++)
		printmovie (films[n]);

	return 0;
}

void printmovie (movies_t movie)
{
	cout << movie.title;
	cout << " ( " << movie.year << " ) " << endl;
}

/***************************/
#elif defined SEG2

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
};

int main()
{
	string mystr;

	movies_t amovie;
	movies_t *pmovie;
	pmovie = &amovie;

	cout << "Enter title: ";
	getline (cin, pmovie->title);
	cout << "Enter year: ";
	getline (cin, mystr);
	(stringstream) mystr >> pmovie->year;

	cout << "\nYou have entered these movies:\n";
	cout << pmovie->title;
	cout << " ( " << (*pmovie).year << " ) " << endl;
}

/***************************/

#endif
