#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &b = x;
    x += 10;
    cout << x << " " << b << endl;
    return 0;
}

// IT WILL PRINT 20 and 20 as b
// points to x and it's value changed...