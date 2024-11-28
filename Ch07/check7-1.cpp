// Show an example that the virtual function changes the behavior of the base class.


#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base\n";
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived\n";
    }
};

int main() {
    Base b;
    Derived d;

    b.show();
    d.show();

    return 0;
}