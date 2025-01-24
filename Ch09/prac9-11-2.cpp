// Define a generic lambda function that displays the first argument.
// Then call the lambda function with any type of argument.

#include <iostream>

int main()
{
auto lambda = [] (auto x) { std::cout << x << std::endl; };
lambda(1);
lambda(2.4);
lambda("Hello");
return 0;
}