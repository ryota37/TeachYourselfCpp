// Check if data() member function of std::string returns the C-style string.

#include <iostream>
#include <string>

int main()
{
    std::string str = "It's Going Down Now";
    const char* cStr = str.data();
    std::cout << "cStr: " << cStr << std::endl;
    std::cout << (cStr[str.length()] == '\0') << std::endl;

    return 0;
}