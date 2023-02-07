// if sum if the factors of a number is double the number
//  then the number is perfect number

#include <iostream>
using namespace std;
int main()
{
    int sum = 0, number;
    cout << "Enter a number to check if it is perfect of not: " << endl;
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if ((number * 2) == sum)
    {
        cout << number << " is a perfect number" << endl;
    }else{
        cout<< number << " is not a perfect number"<<endl;
    }

    return 0;
}