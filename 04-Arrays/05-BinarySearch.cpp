#include <iostream>
using namespace std;
int main()
{

    int A[10] = {12, 13, 14, 24, 35, 46, 57, 68, 89, 94};
    int toSearch, low = 0, high = 9, mid;

    cout << "Enter an element that you want to find: " << endl;
    cin >> toSearch;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (toSearch == A[mid])
        {
            cout << "Found at " << A[mid] << endl;
            return 0;
        }
        else if (toSearch < A[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout << "Not found" << endl;

    return 0;
}