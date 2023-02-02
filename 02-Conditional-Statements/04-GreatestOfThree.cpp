#include <iostream>
using namespace std;
int main()
{

    int first, second, third;
    cout << "Enter three numbers : " << endl;
    cin >> first >> second >> third;

    if (first > second && second > third)
    {
        cout << first << " is the greatest" << endl;
    }
    else if (second > third)
    {
        cout << second << " is the greatest" << endl;
    }
    else
    {
        cout << third << " is the greatest" << endl;
    }
    return 0;
}