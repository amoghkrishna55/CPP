#include<iostream>
using namespace std;

class Building{ 
    public:     // ACCESS MODIFIERS - PUBLIC / PRIVATE(Default) / PROTECTED
    int door;
    string doorColor;

    private:
    int window;
    string windowColor;
    int elevator;

    void elevatorFunctioning(){
        //Working of elevator
    }
};

int main(){
    Building b1;

    b1.door;
    //b1.window; is private 
}