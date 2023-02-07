#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number whose factors you want to find" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}