// Prepare two classes that are in inheritance relationship.
// Also prepare a function that receives a reference to the base class.
// Then check if the entity of the reference that the function recieves is the derived class.

#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
};

void my_funciton(const Base& base)
{
    if (typeid(base) == typeid(Derived)) {
        std::cout << "The type of the entity is Derived." << std::endl;
    } else {
        std::cout << "The type of the entity is Base." << std::endl;
    }
}

int main()
{
    Base base;
    my_funciton(base);

    Derived derived;
    my_funciton(derived);
}