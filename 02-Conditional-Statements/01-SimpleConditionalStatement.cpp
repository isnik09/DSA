#include <iostream>
using namespace std;
int main()
{
    int roll;
    cout << "Enter your roll number: " << endl;

    cin >> roll;
    if (roll > 0)
    {
        cout << "It is a vaild roll number" << endl;
    }
    else
    {
        cout << "Don't make me kill you..." << endl;
    }
    return 0;
}
