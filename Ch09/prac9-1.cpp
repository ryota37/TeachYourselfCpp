// Define a function template id() function that returns any type of arugment and 
// returns the argument itself.
// Then call id() function with various types of arguments.

#include <iostream>
#include <string>

template <typename T>
T id(T arg) {
    return arg;
}

int main() {
    std::cout << id(5) << std::endl;
    std::cout << id(3.14) << std::endl;
    std::cout << id("Hello") << std::endl;
    return 0;
}