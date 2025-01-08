// Define a function template that can recive both left-handed and right-handed values as arguments using the forwarding reference.

#include <iostream>

template <typename T>
void foo (T&& variable)
{
    std::cout << variable << std::endl;
};

int main()
{
    int a = 10;
    foo(a);

    foo(10);

    return 0;
}   