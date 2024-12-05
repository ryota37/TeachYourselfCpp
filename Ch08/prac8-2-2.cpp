// Display an integer value following the rule shown below:
// 1. Display the integer value right-justified in the 8-digit octal format.
// 2. Use "-" as the fill character.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::right << std::setfill('-') << std::oct << std::setw(8) << 1678 << std::endl;
    return 0;
}