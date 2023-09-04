// // Write a C++ class called "Employee" that has three private member variables: "name", "salary", and "employeeCode". The class should have a constructor that initializes these member variables and a public member function called "displayInfo" that prints out the employee's name, salary, and employeeCode.

// #include <iostream>
// #include <string>
// using namespace std;

// class Employee {
//     private:
//         string name;
//         int salary;
//         int employeeCode;
//     public:
//         Employee(string name, int salary, int employeeCode) {
//             this->name = name;
//             this->salary = salary;
//             this->employeeCode = employeeCode;
//         }
//         void displayInfo() {
//             cout << "Name: " << name << endl;
//             cout << "Salary: " << salary << endl;
//             cout << "Employee Code: " << employeeCode << endl;
//         }
// };

// int main() {
//     Employee e("John", 50000, 12345);
//     e.displayInfo();
//     return 0;
// }

#include <iostream>
#include<string>
using namespace std;

class Employee{
    string name;
    int salary;
    int empcode;
    public:
    Employee(string a, int b, int c) {
        name = a;
        salary = b;
        empcode = c;
    }

    Employee(){}
    
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Employee Code: " << empcode << endl;
    }

};

int main() {
    Employee e("Amogh Krishna", 100, 12224028);
    e.displayInfo();
    return 0;
}