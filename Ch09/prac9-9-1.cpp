// Check that the variadic templates can recieve any number of arguments
// using the number of elemnts in the template parameter pack.

#include <iostream>

template <typename... Args>
void print(Args... args)
{
    std::cout << sizeof...(args) << std::endl;
}

int main()
{
    print(1, 2, 3, 4, 5);
    print(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    return 0;
}