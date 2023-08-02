#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter your number: ";
    cin >> a;
    if (a%2 == 0){
        cout << "You number is even" << endl;
    }
    else{
        cout << "You number is odd" << endl;
    }
}