// Raju is an accountant for an ABC company. As part of his responsibilities, he needs to manage the employee information and calculate their salaries. To streamline the process, Raju decided to develop a program that allows him to input the details of multiple employees and display their salary information.



// Write a program to calculate the salary of employees based on their hourly rate and hours worked. The inputs contain the name, rate per hour, and working hours of the employees. Overtime pay should be considered for employees who work more than 40 hours. Create a class Employee that holds all the attributes and uses an array of objects to solve it.



// Hint: The overtime pay is calculated by multiplying the number of overtime hours by 1.5 times the regular hourly rate.



// Note: This question is a sample question asked in a Cocubes interview.

// Input format :
// The first line of input consists of an integer, n, representing the maximum number of employees.

// For each employee, the following space-separated details should be entered:

// a string representing the name of the employee.
// a double value, representing the rate per hour.
// an integer representing the working hours of the employee.
// Output format :
// For each employee, the output displays the following information:

// The first line of output displays the employee's name as a string.

// The second line of output displays the updated salary of the employee as a double value rounded to one decimal place. (considering overtime pay for hours worked beyond 40).



// Refer to the sample outputs for the exact format.

// Code constraints :
// 1 <= n <= 20

// employee name length <= 50

// 0.0 <= hourly rate <= 24.0

// 1 <= working hours <= 50

// Sample test cases :
// Input 1 :
// 3
// John  20.5 35
// Jane  18.7 42
// Johnson 22.0 50
// Output 1 :
// Employee Information:
// Employee Name: John
// Salary: 717.5
// Employee Name: Jane
// Salary: 841.5
// Employee Name: Johnson
// Salary: 1430.0
// Input 2 :
// 5
// John 15.5 40
// Smith 20.0 35
// Johnson 18.75 42
// Thompson 22.0 50
// Wilson 12.5 30
// Output 2 :
// Employee Information:
// Employee Name: John
// Salary: 620.0
// Employee Name: Smith
// Salary: 700.0
// Employee Name: Johnson
// Salary: 843.8
// Employee Name: Thompson
// Salary: 1430.0
// Employee Name: Wilson
// Salary: 375.0

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee
{
    string name;
    double rate;
    int hours;

public:
    void getdata()
    {
        cin >> name >> rate >> hours;
    }
    void putdata()
    {
        cout << "Employee Information:" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << fixed << setprecision(1) << rate * hours << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].getdata();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].putdata();
    }
    return 0;
}

