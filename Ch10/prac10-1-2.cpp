// Add try block to prac10-1-1.cpp and check if the program doesn't terminate// Throw exception without using try block and check if the program terminates

#include <iostream>

int main() {
    std::cout << "Before exception\n";
    try{throw 20;}
    catch(int i){std::cout << "Caught exception: " << i << std::endl;}
    std::cout << "After exception\n";
    return 0;
}