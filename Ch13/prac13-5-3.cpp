// Enter a string and a regex respectively to the console, then check if the string partially matches the regex.
// If it matches, enumerate the submatches.

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
    std::regex re = std::regex(regex);

    std::sregex_token_iterator first(str.begin(),str.end(), re);
    decltype(first) last;

    while(first != last)
    {
        std::cout << first->str() << std::endl;
        std::cout << "pos:" << std::distance(str.cbegin(), first->first) << std::endl;
        std::cout << "length:" << first->length() << std::endl;
        ++first;
    }

    return 0;
}

// Example input:
// Enter a string:寝言は寝て言え
// Enter a regex:寝.