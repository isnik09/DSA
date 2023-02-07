#include <iostream>
using namespace std;
int main()
{
    int factorial = 1, number;
    cout << "Enter a number whose factorial you want to find: " << endl;
    cin >> number;
    for (int i = number; i >= 1; i--)
    {
        factorial *= i;
    }
    cout << "Factorial of " << number << " is " << factorial << endl;
    return 0;
}

/*
5==> 5*4*3*2*1

*/