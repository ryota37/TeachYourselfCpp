// Enter a string and a regex respectively to the console, then check if the string perfectly matches the regex.

#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::string str;
    std::string regex;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::cout << "Enter a regex: ";
    std::getline(std::cin, regex);

    if (std::regex_match(str, std::regex(regex)))
    {
        std::cout << "The string perfectly matches the regex." << std::endl;
    }
    else
    {
        std::cout << "The string does not match the regex." << std::endl;
    }

    return 0;
}

// Example input:
// Enter a string:Teach yourself C++
// Enter a regex:Teach\syourself\s.*