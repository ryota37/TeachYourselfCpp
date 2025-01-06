// Recieve an int value with a (non-type) template parameter of a function template.
// Display the recieved value at the function template.

#include <iostream>

template <int i>
void printValue()
{
    std::cout << "Value: " << i << std::endl;
}

int main()
{
    printValue<10>();

    return 0;
}