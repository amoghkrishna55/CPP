#include<iostream>
using namespace std;

class Shape{
    public:
    virtual float calculate_area() = 0;
};

class Square : public Shape{
    float a;
    public:

    Square(float x){
        a = x;
    }

    float calculate_area() override{
        return a*a;
    }
};

int main(){
    Square s1(4);

    Shape* d = &s1;

    cout << d->calculate_area();
}