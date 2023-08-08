#include<iostream>
using namespace std;

struct students{
    string name;
    int rollNo;
    float marks;
};

int main(){
    students stud1, stud2;
    stud1.name = "Amogh";
    stud1.marks = 90.87;
    stud1.rollNo = 12224028;
    stud2.name = "Gaurav";
    stud2.marks = 78.90;
    stud2.rollNo = 12223985;
    cout << stud1.marks << endl;
    cout << stud2.marks;
}