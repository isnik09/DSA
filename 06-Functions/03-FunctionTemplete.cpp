#include <iostream>
using namespace std;

template <class T>
T max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    cout << "taking float mas of two numbers is " << max(12.3, .45) << endl;
    cout << "taking int max of two numbers is " << max(12, 34) << endl;
}