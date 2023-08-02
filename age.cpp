#include<iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter your age: ";
    cin >> a;
    if(a<0 || a>=150){
        cout << "Enter a valid age" << endl;
    }
    else if (a>=18){
        cout << "You are eligible to vote" << endl;
    }
    else{
        cout <<"You are not eligible to vote" << endl;
    }
    return 0;
}