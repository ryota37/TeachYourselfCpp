// Make a class that overloads its constructor.
// Then call the constructors separately when you allocate the object dynamically with new operator.

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Default constructor" << std::endl;
    }
    MyClass(int a) {
        std::cout << "Constructor with int: " << a << std::endl;
    }
    MyClass(double a) {
        std::cout << "Constructor with double: " << a << std::endl;
    }
    MyClass(int a, double b) {
        std::cout << "Constructor with int and double: " << a << ", " << b << std::endl;
    }
    ~MyClass() {
        std::cout << "Destructor" << std::endl;
    }
};

int main()
{
    MyClass* p1 = new MyClass;
    MyClass* p2 = new MyClass(5);
    MyClass* p3 = new MyClass(3.14);
    MyClass* p4 = new MyClass(5, 3.14);

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}