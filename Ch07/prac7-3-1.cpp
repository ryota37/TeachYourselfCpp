#include <iostream>

class Base
{
public:
    void method_Base(){ std::cout << "method_Base()" << std::endl; };
};

class Derived : public Base
{
public:
    void method_Derived(){ std::cout << "method_Derived()" << std::endl; };
};

int main()
{
    Base base;
    Derived derived;

    base.method_Base();
    derived.method_Base();
    derived.method_Derived();

    Derived* pDerived;

    Base* pBase = pDerived;

    pBase->method_Base();
    // pBase->method_Derived(); // error
    pDerived->method_Base();
    pDerived->method_Derived();

    return 0;
}