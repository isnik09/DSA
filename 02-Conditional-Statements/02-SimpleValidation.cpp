#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Add three numbers (for division): ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Invalid denoninator you dumb..." << endl;
    }
    else
    {
        c = a / b;
        cout << "Your divisions is " << c << endl;
    }

    return 0;
}