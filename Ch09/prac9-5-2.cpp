// Call a function template using type inference without specifying the template parameter.

#include <iostream>

template <typename T>
void print(T a, T b)
{
    std::cout << a + b << std::endl;
};

int main()
{
    print(1, 2);
    print(3.14, 2.71);

    return 0;
}