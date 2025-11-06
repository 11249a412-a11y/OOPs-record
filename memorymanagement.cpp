#include <iostream>
#include <cstdlib>  
#include <new>       

class MyClass {
public:
    int data;

    
    void* operator new(size_t size) {
        std::cout << "Custom new called, size = " << size << std::endl;
        void* ptr = std::malloc(size);
        if (!ptr) throw std::bad_alloc(); 
        return ptr;
    }

    
    void operator delete(void* ptr) {
        std::cout << "Custom delete called" << std::endl;
        std::free(ptr);
    }

    
    void* operator new[](size_t size) {
        std::cout << "Custom new[] called, size = " << size << std::endl;
        void* ptr = std::malloc(size);
        if (!ptr) throw std::bad_alloc();
        return ptr;
    }

   
    void operator delete[](void* ptr) {
        std::cout << "Custom delete[] called" << std::endl;
        std::free(ptr);
    }
};

int main() {
   
    MyClass* obj = new MyClass();
    delete obj;

    
    MyClass* arr = new MyClass[3];
    delete[] arr;

    return 0;
}
