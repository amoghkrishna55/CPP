#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> a;
    int arr[10];
    arr[0] = 34;
    arr[1] = 4;
    arr[2] = 251;
    arr[3] = 10000;
    arr[4] = 1;
    arr[5] = 2;
    arr[6] = 3;
    arr[7] = 4;
    a.push_back(10000);
    a.push_back(251);
    a.push_back(34);
    a.push_back(4);
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    sort(arr,arr+8);
    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    }
}