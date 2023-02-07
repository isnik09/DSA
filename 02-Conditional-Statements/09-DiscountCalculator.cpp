#include <iostream>
using namespace std;
void main()
{
    int paid;
    cout << "How much did you spend" << endl;
    cin >> paid;
    if (paid<100){
        cout<<"You poor kid, there is no discount for you"<<endl;
    }else if (paid >=100 && paid < 500){
        float a = ((paid * 10 )/100);
        
        cout<<paid = paid-a;

    }
}