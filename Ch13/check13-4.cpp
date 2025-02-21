// Replace a string using regex.

# include <iostream>
# include <string>
# include <regex>

int main()
{
    std::string c = "Teach yourself C";
    std::string cpp = "Teach yourself C++";
    std::string csharp = "Teach yourself C#";
    std::string java = "Teach yourself Java";
    
    std::regex re{"C.*"};

    std::string python = std::regex_replace(c, re, "Python");
    std::string rust = std::regex_replace(cpp, re, "Rust");
    std::string go = std::regex_replace(csharp, re, "Go");
    std::string kotlin = std::regex_replace(java, re, "Kotlin");

    std::cout << python << std::endl;
    std::cout << rust << std::endl;
    std::cout << go << std::endl;
    std::cout << kotlin << std::endl;
}