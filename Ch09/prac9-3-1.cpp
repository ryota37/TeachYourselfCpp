// Check if a virtual function can be used in a class template.
// Also check whether the functionality of a virtual function, 
// which allows overriding the behavior of a base class works.

#include <iostream>

class Base
{
public:
    virtual void print() { std::cout << "base" << std::endl; }
};

template <typename T>
class Derived : public Base
{
public:
    void print() { std::cout << "derived" << std::endl; }
};

int main()
{
    Base b;
    b.print(); // base
    Derived<int> d;
    d.print(); // derived

    return 0;
}

