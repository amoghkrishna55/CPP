#include<iostream>
using namespace std;
void prints(int arr[], int num);

void reverse(int arr[], int num){
    int start = 0;
    int end = num -1;

    while(start<end){
        swap(arr[start++],arr[end--]);
    }
    prints(arr,num);
}

void prints(int arr[], int num){
    for(int x=0;x<num;x++){
        cout << arr[x] << " ";
    }
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[5] = {0,6,7,8,9};
    reverse(even,6);
}