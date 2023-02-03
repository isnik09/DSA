#include <iostream>
using namespace std;
int main()
{

    int A[] = {11, 22, 53, 34, 75};
    int sum = 0;
    for (int x : A)
    {
        sum += x;
    }
    cout << "Sum is " << sum << endl;
    return 0;
}