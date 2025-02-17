// Sort std::vector in descending order.

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    std::sort(v.begin(), v.end(), [](int a, int b) { return a > b; });

    for(auto e : v) std::cout << e << " ";
    std::cout << std::endl;  
}