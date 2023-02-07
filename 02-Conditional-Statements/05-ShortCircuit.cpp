#include <iostream>
using namespace std;
int main()
{

    int a = 4, b = 6, i = 5;
    if (a > b && i++ < b)
    {
    }
    cout << i << endl;
    return 0;
}

/*
here as a>b is false
it wont check for the rest of the statements
so ++i won't be done and hence the
value of i will remain unchanged...
*/
