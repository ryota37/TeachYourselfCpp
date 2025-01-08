// Define a function template that always recieves an argument as const reference.

#include <iostream>

template <typename T>
void foo (const T& variable)
{
    std::cout << variable << std::endl;
};

int main()
{
    int a = 10;
    foo(a);

    double b = 3.14;
    foo(b);

    return 0;
}