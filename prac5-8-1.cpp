#include <iostream>
#include <utility>
// Define a function that receives a right-hand value reference
// Then call the function with a variable as an actual argument.

int doubleValue(int&& value)
{
    return value * 2;
}

int main()
{
    int&& x = 5;
    int y = doubleValue(std::move(x));
    int z = doubleValue(6);

    std::cout << y << std::endl;
    std::cout << z << std::endl;

    return 0;
}