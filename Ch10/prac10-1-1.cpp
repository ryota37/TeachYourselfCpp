// Throw exception without using try block and check if the program terminates

#include <iostream>

int main() {
    std::cout << "Before exception\n";
    throw 20;
    std::cout << "After exception\n";
    return 0;
}