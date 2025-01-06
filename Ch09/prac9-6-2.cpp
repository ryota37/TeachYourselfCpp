// Modify the function template that you wrote at prac9-6-1.cpp to receive values of other types.

#include <iostream>

template <auto i>
void printValue()
{
    std::cout << "Value: " << i << std::endl;
}

int main()
{
    printValue<10>();
    printValue<'A'>();

    return 0;
}