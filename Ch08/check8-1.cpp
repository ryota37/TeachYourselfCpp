// Display any integer in decimal formats and left-justified in a field width of 16.
// Fill the blank spaces with '=' characters.
// You can use manipulators.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::left << std::setfill('=') << std::hex << std::setw(16) << 843560821678 << std::endl;
    return 0;
}