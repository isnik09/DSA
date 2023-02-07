    int *p = new int[5];
    p[0] = 12;
    p[1] = 13;
    cout << p[1] << endl;
    delete[] p;
    int A[10];
    cout << "Size of an array with 10 int elements is " << sizeof A << endl;
    //  p=NULL;  used in OLD CPP
    p = nullptr;
