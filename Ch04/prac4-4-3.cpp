// Explain what wii be shown when the following program is executed.
// My assumption: else: 42
// The actual result: else: 0

#include <iostream>

int main()
{
    int i = 42;

    if (int i = 0; i > 0)
    {
        std::cout << "if: " << i << std::endl;
    }
    else
    {
        std::cout << "else: " << i << std::endl;
    }
}