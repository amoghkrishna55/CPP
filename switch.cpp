#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter a number BTW 1-3: ";
    cin >> a;
    switch(a){
        case 1:
        cout << "Entered number is 1";
        break;
        case 2:
        cout << "Entered number is 2";
        break;
        case 3:
        cout << "Entered number is 3";
        break;
        default:
        cout << "Enter valid number";
    }
}