#include<iostream>
using namespace std;
class B; //forward declaration

class A {
    int data;

public:
    void setValue(int val) {
        data = val;
    }
    friend void add(A, B);     // B doesn't exits as of now so compiler shows error without forward declaration
};

class B {
    int data;

public:
    void setValue(int val) {
        data = val;
    }
    friend void add(A, B);
};

void add(A obj1, B obj2) {
    cout << "The sum is: " << obj1.data + obj2.data;
}

int main() {
    A a1;
    B b1;
    a1.setValue(10);
    b1.setValue(20);
    add(a1, b1);
}
