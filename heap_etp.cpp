#include<iostream>
using namespace std;

void heapify(int arr[],int size,int n){
    int largest = n;
    int left = 2*n;
    int right = 2*n + 1;
    if(left<=size && arr[largest]<=arr[left]){
        largest = left;
    }
    if(right<=size && arr[largest]<=arr[right]){
        largest = right;
    }

    if(n!=largest){
        swap(arr[n],arr[largest]);
        heapify(arr,size,largest);
    }

}

void heapsort(int arr[],int size){
    int i = size;
    while(i>1){
        swap(arr[i],arr[1]);
        i--;
        heapify(arr,i,1);
    }
}

int main(){
    int size;
    cin >> size;
    int* arr = new int[size];
    arr[0] = -1;
    for(int i=1;i<size;i++){
        cin >> arr[i];
    }
    for(int i=size/2;i>0;i--){
        heapify(arr,size,i);
    }

    for(int i=1;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    heapsort(arr,size);
    for(int i=1;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}