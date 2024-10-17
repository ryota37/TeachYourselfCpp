// Fix the following program so that it compiles and runs.

#include <iostream>

class A
{
    int value;

public:
    void set(int value) { this->value = value; }
    void foo();
};

void A::foo()
{
    auto lambda = [this]()
    {
        std::cout << value << std::endl;
    };
    value = 0;
    lambda();
}

int main()
{
    A a;
    a.set(42);
    a.foo();
}