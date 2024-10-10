// Fix the following program so that it compiles and runs.

#include <iostream>

class A
{
    int value = 0;

public:
    void set(int value) { this->value = value; }
    void foo();
};

void A::foo()
{
    auto lambda = []()
    {
        std::cout << value << std::endl;
    };
    lambda();
}

int main()
{
    A a;
    a.set(42);
    a.foo();
}