#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int sum = 0;
    for(int i=0; i<5; i++){
        cout << "Enter " << i+1 << " number: ";
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "The entered numbers are: ";
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << sum/5 << endl;
}