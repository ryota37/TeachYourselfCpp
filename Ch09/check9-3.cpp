// Define a variadic arugument function template.
// Then perfectly forward all the arguments to another variadic argument function template.

#include <iostream>

template <typename... T>
void function2(T&&... args)
{
    (std::cout << ... << args) << std::endl;
}

template <typename... T>
void function(T&&... args)
{
    function2(std::forward<T>(args)...);
}

int main()
{
    function(1, 2, 3, 4, 5);
    return 0;
}