// Downcast with dynamic_cast

#include <iostream>

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
};

int main()
{
    Derived derived;
    Base* base_ptr = &derived;
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
    if (derived_ptr)
        std::cout << "Downcast succeeded." << std::endl;
    else
        std::cout << "Downcast failed." << std::endl;
}