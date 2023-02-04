#include <iostream>
using namespace std;
int main()
{

    int length, sum;
    float average;
    int element;
    cout << "Enter length of an array: " << endl;
    cin >> length;
    int A[length];
    for (int i = 0; i < length; i++)
    {
        cout << "Enter arrays: " << endl;
        cin >> element;
        A[i] = element;
    }
    for (int x : A)
    {
        sum += x;
    }
    average = (sum) / length;
    cout << "Average is : " << average << endl;

    return 0;
}