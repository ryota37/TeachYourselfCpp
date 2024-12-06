// Write a code that reads a file and displays its contents on the screen.
// Then read the file prac8-5-2.cpp itself.

#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream file("prac8-5-2.cpp");
    if (!file) {
        std::cerr << "File open error\n";
        return 1;
    }

    char ch;
    while (file.get(ch)) {
        std::cout.put(ch);
    }

    file.close();
    return 0;
}

// In the answer code, __FILE__ macro is used to read the file itself.