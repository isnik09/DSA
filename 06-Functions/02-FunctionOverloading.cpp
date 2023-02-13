#include <iostream>
using namespace std;

int add(int a, int b, int c)
{
    return a + b + c;
}

int add(int a, int b)
{
    return a + b;
}

int main()
{

    cout << "function call with 2 arguments i.e. add(3,1,2)" << endl;
    cout << add(32, 21, 11) << endl;

    cout << endl;
    cout << "Function call with 2 arguments i.e. add(34,2)" << endl;
    cout << add(34, 2) << endl;

    return 0;
}