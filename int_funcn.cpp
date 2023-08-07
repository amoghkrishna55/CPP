#include<iostream>
using namespace std;

int product(int num1, int num2){
    return num1 * num2;
}

int main(){
    int a,b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    cout << "The product is: " << product(a,b) << endl;
}