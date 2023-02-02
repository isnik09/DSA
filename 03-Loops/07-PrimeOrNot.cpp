#include <iostream>
using namespace std;
int main()
{
    int number, factors = 0;
    cout << "Enter a number for checking if it's prime or not" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            factors++;
        }
    }

    if (factors > 2)
    {
        cout << number << " is not prime" << endl;
    }
    else
    {
        cout << number << " is prime" << endl;
    }

    return 0;
}