#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5;
    if (true)
    {
        int c = a + b;
        cout << c << endl;
    }
    // cout << c; as the scope of the C ended 
    // after that if block 
    // therefore it won't be visible here... 
    // It saves memory...
    return 0;
}