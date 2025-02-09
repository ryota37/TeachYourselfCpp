// Check if two lambda expressions that have the same definition 
// have different types using RTTI.

#include <iostream>
#include <typeinfo>

int main() {
    auto lambda1 = []() { return 1; };
    auto lambda2 = []() { return 1; };

    if (typeid(lambda1) == typeid(lambda2)) {
        std::cout << "The types of lambda1 and lambda2 are the same." << std::endl;
    } else {
        std::cout << "The types of lambda1 and lambda2 are different." << std::endl;
    }

    return 0;
}