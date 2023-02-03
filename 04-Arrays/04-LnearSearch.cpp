#include <iostream>
using namespace std;
int main()
{

    int toSearch, rangeOfArray;

    cout << "Enter how long you want your array to be: " << endl;
    cin >> rangeOfArray;
    int A[rangeOfArray];
    for (int &x : A)
    {
        cout << "Enter a number: " << endl;
        cin >> x;
    }

    cout << "What number you want to find? " << endl;
    cin >> toSearch;
    for (int x : A)
    {
        if (toSearch == x)
        {
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;
    return 0;
}