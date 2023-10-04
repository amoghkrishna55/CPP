#include<iostream>
using namespace std;

class Animal{
    string line;
    public:
    Animal(){
        line = "Animal";
    }

    virtual string getType(){
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
    public:
    string line;

    Cat() : line("Cat"){}

    string getType(){
        return line;
    }
};

void print(Animal* animal){
    cout << "Animal Type: " << animal->getType() << endl;
}

int main(){
    Animal* dog = new Dog();
    Animal* animal1 = new Animal();
    Animal* cat = new Cat();

    print(dog);
    print(animal1);
    print(cat);
}