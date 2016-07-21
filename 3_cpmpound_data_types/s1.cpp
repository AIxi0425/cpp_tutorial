/*
 *  Arrays
 *  using space rather than tab
 */

#define SEG4

/***************************/

#ifdef SEG1
#include <iostream>
using namespace std;

int foo [] = {16, 2, 77, 40,12071};
int n, result;

int main()
{
    for (n = 0; n < 5; n++)
    {
        result += foo[n];
    }
    cout << result << endl;

    return 0;
}

/***************************/

#elif defined SEG2
#include <iostream>
using namespace std;

void printarray (int arg[], int length)
{
    for (int n = 0; n < length; n++)
    {
        cout << arg[n] << " ";
    }
    cout << endl;
}

int main()
{
    int firstarr[] = {1, 2, 3, 4, 5};
    int secondarr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    printarray (firstarr,5);
    printarray (secondarr,9);
    
    return 0;
}

/***************************/

#elif defined SEG3
#include <iostream>
using namespace std;

int main()
{
    int myarray[] = {10, 20, 30};
    for (int i = 0; i < 3; i++)
    {
        ++myarray[i];
    }
    
    for (int elem : myarray)
        cout << elem << endl;
    
    return 0;
}

/***************************/

#elif defined SEG4
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 3> myarray {100, 200, 300};
    for (int i = 0; i < myarray.size(); ++i)
        ++myarray[i];
       
    for (int elem : myarray)
        cout << elem << endl;
}
#endif
