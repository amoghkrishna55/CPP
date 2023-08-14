// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Person{
    int age;
    string name , gender;
    
    public:
    
    void input(){
        cin >> name >> age >> gender;
    }
    
    void display(){
        cout << name << endl;
        cout << age << endl;
        cout <<gender << endl;
    }
};


int main(){
    Person info;
    info.input();
    info.display();
}