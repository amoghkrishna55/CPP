#include<iostream>
using namespace std;

void heapify(int arr[], int size, int n){
    int small = n;
    int left =  2*n + 1;
    int right = 2*n +2;
    if(left < size && arr[left] < arr[small]){
        small = left;
    }
    if(right < size && arr[right] < arr[small]){
        small = right;
    }
    if(small != n){
        swap(arr[small], arr[n]);
        heapify(arr, size, small);
    }
}

void insertHeap(int arr[], int value, int &n){
    arr[n] = value;
    swap(arr[n], arr[0]);
    n++;
    for(int i=n/2-1;i>=0;i--){
        heapify(arr, n, i);
    }
}

int main(){
    int a;
    int n = 0;
    cin >> a;
    int* arr = new int[a];
    for(int i = 0; i < a; i++){
        cin >> arr[i];
        insertHeap(arr, arr[i], n);
    }

    for(int i = 0; i < a; i++){
        cout << arr[i] << " ";
    }

    delete[] arr; // Deallocate memory
    return 0;
}
