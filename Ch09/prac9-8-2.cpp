// Check that the typename is unnecessary in an alias template.

#include <iostream>
#include <vector>

template <typename T>
using Vec_ref = typename std::vector<T>::reference;

template <typename T>
Vec_ref<T>
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::cout << at(v, 2) << '\n';
}