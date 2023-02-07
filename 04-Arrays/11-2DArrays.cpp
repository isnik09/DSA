#include <iostream>

using namespace std;
int main()
{

    int A[2][3] = {{2, 3, 1}, {4, 3, 5}};
    for (int row = 0; row < 2; row++)
    {

        for (int column = 0; column < 3; column++)
        {
            cout << A[row][column]<<" ";
        }
        cout << endl;
    }

    return 0;
}