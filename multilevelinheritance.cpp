#include <iostream>
using namespace std;


class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};


class Mammal : public Animal {
public:
    void walk() {
        cout << "This mammal can walk." << endl;
    }
};


class Dog : public Mammal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
   
    Dog myDog;

    
    myDog.eat();   
    myDog.walk();  
    myDog.bark();  

    return 0;
}
