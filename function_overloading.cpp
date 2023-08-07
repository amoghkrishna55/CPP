#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}

int main(){
    cout << add(2,2);
    cout << add(2.2f,2.2f); // Define the type with "f" 

}