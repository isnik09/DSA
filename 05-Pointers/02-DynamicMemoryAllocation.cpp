#include <iostream>
using namespace std;
int main()
{

    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    cout << p[1] << endl;
    delete[] p;
    int A[10];
    cout << "Size of an array with 10 int elements is " << sizeof A << endl;
    //  p=NULL;  used in OLD CPP
    p = nullptr;

    // Array declaration in stack

    // int size;
    // cout << "Enter size of an array: " << endl;
    // cin >> size;
    // int A[size];

    // cout << "Enter size of an array: " << endl;
    // cin >> size;
    // int A[size];

    // SO this will give an error as once array is created in stack we can't change it's
    // size, 'cause doing so we will modify it's memory so it's not possible...

    // Array declaration in heap
    int *q = new int[20];
    // now we delete old p as it's work has been done
    delete[] q;
    cout << "q got deleted" << endl;
    q = new int[40];

    return 0;
}
