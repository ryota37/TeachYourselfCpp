// Define a function template as a member funcion of a class template.
// Define the function template outside the class template.

#include <iostream>

template <typename T>
class A
{
public:
    template <typename U>
    void hoge(U value);
};

template <typename T>
template <typename U>
void A<T>::hoge(U value)
{
    std::cout << value << std::endl;
}

int main()
{
    A<int> a;
    a.hoge(42);
    return 0;
}