#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    cout << "Program for area of the circle" << endl;
    float area, radius;
    cout << "Please enter radius of the circle" << endl;

    cin >> radius;
    // area = 3.1425f * radius * radius;
    // area = (float)22/7 *radius*radius;
    area = M_PI * pow(radius, 2);
    cout << "Area of the circle is " << area << endl;
    return 0;
}