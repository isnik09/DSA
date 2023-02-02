#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number whose reverse you want: " << endl;
    cin >> number;
    while (number > 0)
    {

        int i = number % 10;
        cout << i ;
        number = number / 10;
    }

    return 0;
}