#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    bool val = true;
    string arr[20], line;
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> arr[i];
    }
    cin >> line;
    for(int i=0;i<a;i++){
        if(arr[i] == line){
            cout << i;
            val = false;
        }
    }
    if(val){
        cout << "Not found";
    }
}