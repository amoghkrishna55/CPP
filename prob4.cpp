#include<iostream>
#include<string>
using namespace std;

void info(string name, float percentage){
    cout << "My name is " << name << " and my percentage in 12th was " << percentage << "%" << endl;
}
int main(){
    float a;
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your percentage: ";
    cin >> a;
    info (name,a);
}