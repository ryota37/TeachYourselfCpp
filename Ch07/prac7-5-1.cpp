// Define two base classes and then make a derived class that inherits from both base classes.
// Check that the derived class possesses the member functions of both base classes.

#include <iostream>

class Base1
{
public:
    void func1()
    {
        std::cout << "Base1::func1()" << std::endl;
    }
};

class Base2
{
public:
    void func2()
    {
        std::cout << "Base2::func2()" << std::endl;
    }
};

class Derived
    : public Base1
    , public Base2
{
public:
    void derived()
    {
        std::cout << "Derived::derived()" << std::endl;
    }
};

int main()
{
    Derived d;
    d.func1();
    d.func2();
    d.derived();

    return 0;
}   