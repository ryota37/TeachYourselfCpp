// Enter the file name from the console and open the file stream to read the file.
// Then input a single line from the opend stream and output it to the console.

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string filename;
    std::cout << "Enter the file name: ";
    std::cin >> filename;

    std::ifstream file{filename};

    std::string line;
    std::getline(file, line);
    std::cout << line << std::endl;

    return 0;
}