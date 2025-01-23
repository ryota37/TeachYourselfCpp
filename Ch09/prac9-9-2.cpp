// Check that an appropriate overload is called
// as a result of function calls with the expansion of the template parameter pack.

#include <iostream>

void print(int x)
{
    std::cout << "int " << x << std::endl;
}

void print(double x)
{
    std::cout << "double " << x << std::endl;
}

template <typename... T>
void printparams(T... args)
{
    (print(args), ...);
}

int main()
{
    printparams(1,2.4,3);
    return 0;
}