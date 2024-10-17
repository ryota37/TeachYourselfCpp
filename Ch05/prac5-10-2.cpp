// Capture the copy of the whole instance.
// Then check if the behavior is diferent from the capture of this pointer.

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
    auto lambda = [*this]()
    {
        std::cout << value << std::endl;
    };
    value = 0;
    lambda();
};

int main()
{
    A a;
    a.set(42);
    a.foo();
}

// The behavior differs on C++17, not on C++11. 