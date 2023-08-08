#include<iostream>
using namespace std;

class Room{
    public:
    int length;
    int breadth;
    int height;

    int calculateArea(){
        return length*breadth;
    }

    int calculateVolume(){
        return length*breadth*height;
    }
};

int main(){
    Room r1;

    r1.length = 10;
    r1.breadth = 10;
    r1.height = 5;

    cout << r1.calculateArea() << endl;
    cout << r1.calculateVolume() << endl;
}