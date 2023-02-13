#include <iostream>
using namespace std;

template <class T>
T max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (a < b)
    {
        return b;
    }
    else
    {
        return "Both are same";
    }
}

int main()
{
    cout << "taking float mas of two numbers is " << max(12.3, .45) << endl;
    cout << "taking int max of two numbers is " << max(12, 34) << endl;
}