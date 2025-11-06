#include <iostream>
using namespace std;


class Animal {
public:
    void eat() {
        cout << "This animal can eat." << endl;
    }
};

class Pet {
public:
    void play() {
        cout << "This pet loves to play." << endl;
    }
};


class Dog : public Animal, public Pet {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
   
    Dog myDog;

   
    myDog.eat(); 
    myDog.play(); 
    myDog.bark();

    return 0;
}
