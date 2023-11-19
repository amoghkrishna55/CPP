#include<iostream>
using namespace std;

void rev(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int a;
    cin >> a;
    int* arr = new int[a];
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    rev(arr,a);
    for(int i=0;i<a;i++){
        cout << arr[i] << " ";
    }
}