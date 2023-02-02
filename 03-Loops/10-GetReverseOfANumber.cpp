#include <iostream>
using namespace std;
int main()
{
    int number, reverse = 0;

    cout << "Enter a number whose reverse you want: " << endl;
    cin >> number;
    while (number > 0)
    {

        int part = number % 10;
        number = number / 10;
        reverse = reverse*10 + part;
    }
    cout << reverse;
    return 0;
}