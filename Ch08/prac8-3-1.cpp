// Implement a code that gets the user input and display the input value until the empty line is entered.
// Before the input, display some prompt message.
// When the empty line is entered, stop the program.


#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::cout << "Enter the string (Enter the empty line to quit): ";
    while (std::getline(std::cin, str))
    {
        if (str.empty())
            break;
        std::cout << "You entered: " << str << std::endl;
    }
    return 0;
}