#include<iostream>
using namespace std;

int main(){
    int arr[100],a,y;
    cout << "Enter no of elements: ";
    cin >> a;
    for(int x=0;x<a;x++){
        cin >> arr[x];
    }
    for(int x=0;x<(a/2);x++){
        y = arr[x];
        arr[x] = arr[a-x-1];
        arr[a-x-1] = y;
    }

    for(int x=0;x<a;x++){
        cout << arr[x] <<" ";
    }
}