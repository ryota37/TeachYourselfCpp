// Check if what you answered in prac12-1.cpp is true using std::set.

#include <iostream>
#include <set>

int main()
{
    std::set<int> s={1994, 2025, 2037};

    for (auto i : s) std::cout << i << " ";
    std::cout << std::endl;

    s.insert(1994);

    for (auto i : s) std::cout << i << " ";
    std::cout << std::endl;

    return 0;
    
}