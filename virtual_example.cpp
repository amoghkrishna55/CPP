#include<iostream>
using namespace std;

class Animal{
    string line;
    public:
    Animal(){
        line = "Animal";
    }

    string getType(){
        return line;
    }
};

class Dog : public Animal{
    public:
    string line;

    Dog() : line("Dog"){}

    string getType(){
        return line;
    }
};

class Cat : public Animal{
    string line;

    Cat() : line("Cat"){}
};

int main(){
    Animal* dog = new Dog();
    Animal* animal1 = new Animal();
}