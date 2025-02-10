// Initialize a std::vector so that the elements are ordered from 1 to 5.

#include <iostream>

int main()
{
    std::vector <int> vec;
    vec = {1, 2, 3, 4, 5};

    for (int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
}