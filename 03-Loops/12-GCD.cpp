#include <iostream>
using namespace std;
int main()
{
    int first, second;
    cout << "Enter two numbers: " << endl;
    cin >> first >> second;
    while (first != second)
    {
        if (first > second)
        {
            first -= second;
            // cout << first << endl;
        }
        else
        {
            second -= first;
            // cout << second << endl;
        }
    }
    cout << first << endl;

    return 0;
}