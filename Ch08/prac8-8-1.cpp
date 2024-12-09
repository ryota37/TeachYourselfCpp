// Open a file with read-only and move to the end of the file,and check the error state of the stream.
// Then read a character from the file and check the error state of the stream.

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::ifstream in("hello.txt");

    in.seekg(0, std::ios::end);

    auto state = in.rdstate();
    if (state & std::ios::eofbit)
    {
        std::cout << "EOF reached\n";
    }
    if (state & std::ios::failbit)
    {
        std::cout << "Non-fatal I/O error\n";
    }
    if (state & std::ios::badbit)
    {
        std::cout << "Fatal I/O error\n";
    }

    in.get();
    auto state2 = in.rdstate();
    if (state2 & std::ios::eofbit)
    {
        std::cout << "EOF reached\n";
    }
    if (state2 & std::ios::failbit)
    {
        std::cout << "Non-fatal I/O error\n";
    }
    if (state2 & std::ios::badbit)
    {
        std::cout << "Fatal I/O error\n";
    }

}