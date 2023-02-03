#include <iostream>
using namespace std;
int main()
{
    int A[5] = {1, 12, 31, 4, 5};
    int j = A[0];
    for (int x : A)
    {
        if (j < x)
        {
            j = x;
        }
    }
    cout << j << endl;

    return 0;
}