#include <iostream>
using namespace std;
int main()

{
    float percentageOfDeductions, baseSalary, percentageOfAllowances, netSalary;
    cout << "Enter base salary";
    cin >> baseSalary;
    cout << "Enter percentage of allowance";
    cin >> percentageOfAllowances;
    cout << "Enter percentage of deductions";
    cin >> percentageOfDeductions;

    netSalary = baseSalary + baseSalary * percentageOfAllowances/100 - baseSalary * percentageOfDeductions/100;
    cout << "Your net salary is " << netSalary << endl;
}