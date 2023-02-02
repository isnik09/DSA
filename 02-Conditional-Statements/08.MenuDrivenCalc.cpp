#include <iostream>
using namespace std;
int main()
{
    int choice, firstNumber, secondNumber;
    cout << "Enter two numbers";
    cin >> firstNumber >> secondNumber;
    cout << "Menu" << endl;
    cout << "1. Add\n"
         << "2. Sub\n"
         << "3. Mult\n"
         << "4. Div"
         << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << firstNumber + secondNumber << endl;
        break;

    case 2:
        cout << firstNumber - secondNumber << endl;
        break;

    case 3:

        cout << firstNumber * secondNumber << endl;
        break;

    case 4:

        cout << (float)firstNumber / (float)secondNumber << endl;
        break;
    default:
        cout << "You stupid idiot, just read that menu and choose" << endl;
        break;
    }
}