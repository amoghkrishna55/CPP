/*Write a C++ class called "Rectangle" that has two private member variables: "length" and "width". The class should have a constructor that 
initializes these member variables and public member functions called "getArea" and "getPerimeter" that return the rectangle's area and perimeter, 
respectively.*/

#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;
    public:
        Rectangle(){}

        Rectangle(int len, int wid) {
            length = len;
            width = wid;
        }

        int getArea() {
            return length * width;
        }
        
        int getPerimeter() {
            return 2 * (length + width);
        }
};

int main() {
    Rectangle r(5, 10);
    cout << "Area: " << r.getArea() << endl;
    cout << "Perimeter: " << r.getPerimeter() << endl;
    return 0;
}