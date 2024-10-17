// Overload a function that recieves a reference and a function
// that revieves a right-hand reference. Then call them separately.

#include <iostream>

void show(int& v)
{
    std::cout << v << std::endl;
}

void show(int&& v)
{
    std::cout << v << std::endl;
}

int main()
{
    int a = 10;
    show(a);
    show(20); // my first answer
    show(std::move(a)); // expected answer
}