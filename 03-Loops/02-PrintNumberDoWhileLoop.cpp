#include <iostream>
using namespace std;
int main()
{
    int i = 1, till;
    cout << "Enter a number: " << endl;
    cin >> till;
    do
    {
        cout << i;
        i++;
    } while (i <= till);

    return 0;
}