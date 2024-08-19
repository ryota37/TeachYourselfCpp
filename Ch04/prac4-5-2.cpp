// Call an extern variable in another file

#include <iostream>
#include "prac4-5-2.hpp"

int main() {
    extern int value;
    std::cout << "extern variable: " << value << std::endl;
}
