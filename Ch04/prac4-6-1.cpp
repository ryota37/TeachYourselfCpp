// define an in-line function

#include <iostream>

inline int mario () 
{
    return 310;
}

int main() 
{
    std::cout << mario() << std::endl;
    return 0;
}