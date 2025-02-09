// Downcast with dynamic_cast.
// Implement so that the downcast fails.

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
    Base* base_ptr = new Base;
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr);
    if (derived_ptr)
        std::cout << "Downcast succeeded." << std::endl;
    else
        std::cout << "Downcast failed." << std::endl;
}