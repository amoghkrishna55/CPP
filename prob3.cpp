#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int j = 1;
    while(i<=3){
        while(j<=3*i){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}