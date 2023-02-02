// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {

//     cout << "Program to find speed with given initial and final velocity" << endl;
//     float InitialVelocity, FinalVelocity, Acceleration, Speed;
//     cout << "Please enter intial, final velocity and acceleration"<<endl;
//     cin >> InitialVelocity >> FinalVelocity >> Acceleration;
//     Speed = (pow(FinalVelocity, 2) - pow(InitialVelocity, 2)) / (2 * Acceleration);
//     cout << "Speed is " << Speed << endl;
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

// Function to calculate the minimum and maximum time 
void minMaxTime(string inputTime)
{
    // Get the hour, minute, and second values
    int hour = stoi(inputTime.substr(0, 2));
    int minute = stoi(inputTime.substr(3, 2));
    int second = stoi(inputTime.substr(6, 2));

    // Calculate the minimum and maximum values
    int minHour = hour, maxHour = hour;
    if (inputTime[0] == '@')
    {
        minHour = (hour == 0) ? 2 : minHour;
        maxHour = (hour == 2) ? 22 : maxHour;
    }
    int minMinute = minute, maxMinute = minute;
    if (inputTime[3] == '@')
    {
        minMinute = (minute == 0) ? 40 : minMinute;
        maxMinute = (minute == 40) ? 59 : maxMinute;
    }
    int minSecond = second, maxSecond = second;
    if (inputTime[6] == '@')
    {
        minSecond = (second == 0) ? 12 : minSecond;
        maxSecond = (second == 12) ? 59 : maxSecond;
    }

    // Display the minimum and maximum time
    cout << "MIN ";
    cout << (minHour < 10 ? "0" : "") << minHour << ":";
    cout << (minMinute < 10 ? "0" : "") << minMinute << ":";
    cout << (minSecond < 10 ? "0" : "") << minSecond << endl;
    cout << "MAX ";
    cout << (maxHour < 10 ? "0" : "") << maxHour << ":";
    cout << (maxMinute < 10 ? "0" : "") << maxMinute << ":";
    cout << (maxSecond < 10 ? "0" : "") << maxSecond << endl;
}

int main()
{
    string inputTime = "10:1@:40";
    minMaxTime(inputTime);
    return 0;
}