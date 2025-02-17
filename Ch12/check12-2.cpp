// Delete any element of std::vector except the first and last element.

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto i : numbers) std::cout << i << " ";
    std::cout << std::endl;

    numbers.erase(numbers.begin() + 2);

    for (auto i : numbers) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}