// Show an example that the virutual destructor is necessary.

#include <iostream>

class Base
{
public:
    virtual ~Base() { std::cout << "Base destructor" << std::endl; }
};

class Derived : public Base
{
public:
    ~Derived() {std::cout << "Derived destructor" << std::endl; }
};

int main()
{
    Base *bp = new Derived;
    delete bp;

    return 0;
}