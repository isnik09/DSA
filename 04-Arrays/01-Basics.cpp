#include <iostream>
using namespace std;
int main()
{

    float A[5] = {23.2, 2.4, .34, 14.1, 12};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << A[i] << endl;
    // }

    // FOREACH LOOP
    for (auto x : A)
        cout << x<<" ";

    return 0;
}