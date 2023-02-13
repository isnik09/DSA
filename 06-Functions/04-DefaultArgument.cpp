#include <iostream>
using namespace std;

int sum(int x, int y, int z = 0)
{
    return x + y + z;
}

int main()
{
    cout << "sum of 43 and 123 is " << sum(43, 123) << endl;

    cout << "Sum of 12, 34 and 345 is " << sum(12, 34, 345) << endl;
return 0;
}