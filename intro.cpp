#include<iostream>
using namespace std;

int main(){
    int x = 5; //4byte if x64 --> 32bits
    double y = 5.5; //8byte values of decimal
    float z = 3.6; //4byte values of decimal
    char ch = 'a';
    //bool
    string st = "hello";

    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << ch << endl;
    cout << st << endl;
}