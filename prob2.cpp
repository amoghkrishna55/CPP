#include<iostream>
using namespace std;

int main(){
    int i = 3;
    while(i>0){
        int j = 3;
        while(j>0){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;
    }
}