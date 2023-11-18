#include<iostream>
#include<climits>
using namespace std;

int smallest(int arr[], int size){
    int small = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<small){
            small = arr[i];
        }
    }
    return small;
}

int main(){
    int size;
    cin >> size;
    int* arr = new int[size];
    int* priority = new int[size];
    for(int i=0;i<size;i++){
        cin >> arr[i] >> priority[i];
    }
    int small = smallest(priority,size);
    for(int i=0;i<size;i++){
        int x=0;
        for(;x<size;x++){
            if(priority[x]==small){
                break;
            }
        }
        cout << arr[x] << " ";
        small ++;
        delete[] arr;
        delete[] priority;
    }
}