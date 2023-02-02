#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int number;
    int armstrong = 0;
    cout << "Enter a number to check weather it is armstrong or not: " << endl;
    cin >> number;
    int copyNumber = number;
    string numb = to_string(number);
    int length = numb.length();
    cout << "Length is " << length << endl;

    while (copyNumber > 0)
    {
        int i = copyNumber % 10;
        armstrong += pow(i, length);
        copyNumber = copyNumber / 10;
    }

    cout << "sum is " << armstrong << endl;
    if (number == armstrong)
    {
        cout << "Armstrong number" << endl;
    }
    else
    {
        cout << "Not an armstrong number" << endl;
    }

    return 0;
}

/*

1234

1^4 + 2^4 + 3^4 + 4^4

*/
