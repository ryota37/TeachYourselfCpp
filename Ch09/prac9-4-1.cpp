// Specialize the class template explicitly so that different messages are displayed.

#include <iostream>

template <typename T>
void printType(T t)
{
    std::cout << "Type: not int" << std::endl;
}

template <>
void printType(int)
{
    std::cout << "Type: int" << std::endl;
}

int main()
{
    printType(1);
    printType(3.14);
    printType("Hello");
    return 0;
}