// Define a function, then call it with function pointer.

#include <iostream>

int add(int a, int b) 
{
    return a + b;
}

int main()
{
    int (*func)(int, int) = &add;
    std::cout << func(4, 2) << std::endl;
}