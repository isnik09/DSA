#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : " << endl;
    cin >> age;

    if (age >= 10 && age <= 50)
    {
        cout << "You're still young" << endl;
    }
    else if (age > 50)
    {
        cout << "You're old piece of relic" << endl;
    }
    else
    {
        cout << "You're too young for me too handel" << endl;
    }

    if (age < 18 || age > 58)
    {
        cout << "We can't apply for a job in Electrowiz..." << endl;
    }

    return 0;
}