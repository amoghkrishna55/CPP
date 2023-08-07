#include<iostream>
using namespace std;

int max(int x,int y,int z){
    return (x > y) ? (x > z) ? x:z : (y > z) ? y:z;
}
int min(int x,int y,int z){
    return (x < y) ? (x < z) ? x:z : (y < z) ? y:z;
}

int main(){
    int a,b,c;
    cout << "Enter the numbers: ";
    cin >> a >> b >> c;
    cout << "The max number is: " << max(a,b,c) << endl;
    cout << "The min number is: " << min(a,b,c) << endl;
}