// Allocate an array dynamically with the class you made at the previous task.
// Initialize each element of the array with different constructors. 

// This problem doesn't make sense because the initialization of dynamic array with the initialization list might cause compile error after C++11.

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Default constructor" << std::endl;
    }
    explicit MyClass(int a) {
        std::cout << "Constructor with int: " << a << std::endl;
    }
    explicit MyClass(double a) {
        std::cout << "Constructor with double: " << a << std::endl;
    }
    explicit MyClass(int a, double b) {
        std::cout << "Constructor with int and double: " << a << ", " << b << std::endl;
    }
    ~MyClass() {
        std::cout << "Destructor" << std::endl;
    }
};

int main()
{

    MyClass* MCArray = new MyClass[5]
    {
        MyClass{},
        MyClass{5},
        MyClass{3.14},
        MyClass{5, 3.14},
    };

    delete[] MCArray;
    return 0;
}