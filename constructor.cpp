#include <iostream>
using namespace std;

class Demo {
private:
    int value;

public:
    
    Demo(int v) {
        value = v;
        cout << "Constructor called! Value initialized to " << value << endl;
    }

    
    Demo() {
        cout << "Destructor called! Cleaning up for value " << value << endl;
    }

    void display() {
        cout << "The value is: " << value << endl;
    }
};

int main() {
    cout << "Creating first object...\n";
    Demo obj1(10);
return 0;
}

