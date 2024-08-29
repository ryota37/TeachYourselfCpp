// Write a program using macro so that a function calling calls a different function

#include <iostream>



void function1()
{
    std::cout << "Function 1" << std::endl;
}

void function2()
{
    std::cout << "Function 2" << std::endl;
}


int main()
{
    function1();
    #define function1() function2();
    function1();
}