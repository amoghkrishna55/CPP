#include <iostream>
using namespace std;

void test(int a){
    a++;
    cout << a << endl;
}

int main(){
    int a = 10;
    int &b = a;
    cout << b << endl;
    test(a);
    test(b);
    test(a);
}