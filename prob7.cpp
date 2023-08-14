#include <iostream>
using namespace std;

class Rectangle{
    int len;
    int wid;

    public:

    void setValue(int a,int b){
        len = a;
        wid = b;
    }

    friend void calArea(Rectangle obj);
};

void calArea(Rectangle obj){
    cout << obj.len*obj.wid;
}

int main(){
    Rectangle g1;
    int a,b;
    cin >> a >> b;
    g1.setValue(a,b);
    calArea(g1);
}