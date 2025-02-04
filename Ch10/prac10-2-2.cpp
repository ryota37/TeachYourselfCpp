// Explain what will happen when the code below is executed

#include <iostream>
void foo() noexcept
{
    throw 0;
}

int main()
{
    try
    {
        foo();
    }
    catch (int e)
    {
        std::cout << "catch:" << e << std::endl;
    }
}

// Answer: Despite that the foo() function is declared with noexcept, 
// foo() throws an exception and it is not caught in the function.
// Thus, the program will terminate with std::terminate() function.