#include<iostream>
using namespace std;

void printName(string name = "Hello"){
    cout << "The name is: " << name << endl;
}

void fullName(string first, string last){
    cout << "First name is: " << first << endl;
    cout << "last name is: " << last << endl;
}
int main(){
    printName("Amogh");
    printName();   // Default value
    fullName("Amogh", "Krishna");
}