// Put "Hello, world" to a file.
// Then, rewrite the file with "Hello, file seek".
// Once you opened a file stream, use the same one without closing it.

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ofstream file{"hello.txt"};

    file << "Hello, world" << std::endl;
    file.seekp(7);
    file << "file seek" << std::endl;
    file.close();
    std::ifstream file2{"hello.txt"};

    std::string line;
    std::getline(file2, line);
    std::cout << line << std::endl;
    file.close();

    return 0;
}