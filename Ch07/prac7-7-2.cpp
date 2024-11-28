// Inherit from the base class that has a virtual function,
// then define a inherited class that prohibits more inheritance of the virtual function.

#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base::show()" << std::endl;
    }
};

class Derived : public Base {
public:
    void show()final {
        std::cout << "Derived::show()" << std::endl;
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();

    return 0;
}