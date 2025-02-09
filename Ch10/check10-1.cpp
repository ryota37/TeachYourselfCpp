// Throw an exception and catch it.
// Output a messeage so that you check the flow of the process changed.

#include <iostream>

int main()
{
    std::cout << "Before the proces" << std::endl;
    try
    {
        std::cout << "Before throwing an exception" << std::endl;
        throw 0;
        std::cout << "After throwing an exception" << std::endl;
    }
    catch (int e)
    {
        std::cout << "Caught an exception " << e << std::endl;
    }
    std::cout << "After the process" << std::endl;
}