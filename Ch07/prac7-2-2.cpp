// From constructor of the derived class, call the cunstructor that has the argument of the base class.

#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base constructor\n"; }
    ~Base() { std::cout << "Base destructor\n"; }
};

class Derived : public Base
{
public:
    Derived() : Base() { std::cout << "Derived constructor\n"; }
    ~Derived() { std::cout << "Derived destructor\n"; }
};

int main()
{
    Derived d;
    return 0;
}