#include<iostream>
using namespace std;

class Shape{
    public:
    int shape_width;
    int shape_height;
    void width(int w){
        shape_width = w;
    }
    void height(int h){
        shape_height = h;
    }
    virtual int perimeter() = 0;
};

class Rectangle : public Shape{
    public:
    int perimeter(){
        return 2 * (shape_height + shape_width);
    }
};

class Square : public Shape{
    public:
    int perimeter(){
        return 4 * shape_width;
    }
};
int main(){
    Rectangle r1;
    Square s1;

    r1.height(5);
    r1.width(10);
    s1.width(13);
    cout << r1.perimeter() << " " << s1.perimeter();
}