// Add any value to the end of the std::vector

#include <iostream>

int main()
{
    std::vector <int> vec;
    vec = {1, 2, 3, 4, 5};
    vec.insert(vec.end(), 6);

    for (int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
}