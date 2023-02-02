#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    cout << "Enter an integer: " << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    cout << "Addition till " << number << " is " << sum << endl;

    return 0;
}