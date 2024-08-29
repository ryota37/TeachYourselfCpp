// Try if the program can be linked with a program written in C without using C linkage.

#include <iostream>

// extern "C" void call_c();
// extern "C" void call_cpp()
// {
//     std::cout << "This is a C++ function." << std::endl;
//     call_c();
// }

void call_c();
void call_cpp()
{
    std::cout << "This is a C++ function." << std::endl;
    call_c();
}

// without extern "C" linkage, the program can't be linked with a program written in C
// compile works well, but linking fails