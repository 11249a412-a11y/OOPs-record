#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) {
        length = l;
    }
    int getLength() {
        return length;
    }
};

void printLength(Box b) {
    cout << "Length of box: " << b.getLength() << endl;
}

int main() {
    Box box1(10);
    printLength(box1);  
    return 0;
}

