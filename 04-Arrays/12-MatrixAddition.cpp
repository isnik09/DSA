#include <iostream>
using namespace std;
int main()
{

    int A[2][3] = {5, 4, 2, 1, 2, 3};
    int B[2][3] = {54, 2, 2, 4, 5, 67};
    int C[2][3];
    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            // to perform addition
            C[row][column] = A[row][column] + B[row][column];

            // to print new matrix
            cout << C[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}