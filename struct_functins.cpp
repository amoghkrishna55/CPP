#include<iostream>
using namespace std;

struct employee{
    int age;
    float salary;
    int id;

};

void displayInfo(employee &emp){
    cout << "Age is: " << emp.age << endl;
    cout << "Salary is: " << emp.salary << endl;
    cout << "Employee ID is: " << emp.id << endl;
}

void infoInput(employee &emp){
    cout << "Enter your age: ";
    cin >> emp.age;
    cout << "Enter your salary: ";
    cin >> emp.salary;
    cout << "Enter your Employee ID: ";
    cin >> emp.id;
}

int main(){
    employee e1;
    infoInput(e1);
    displayInfo(e1);
}