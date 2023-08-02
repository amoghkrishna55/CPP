#include<iostream>
#include<string>
using namespace std;

int main(){
    int number;
    string name;
    cout << "Enter a number: ";
    cin >> number;
    cout << "number is : " << number << endl;
    cout << "Enter your name: ";
    cin.ignore();
    //cin >> name;
    getline(cin, name);
    cout << name <<endl;
}