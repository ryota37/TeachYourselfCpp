// Copy all the element of a container to another container.
// Copy them at the top of the destination container in normal order.

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v = {3, 1, 4};
    std::vector<int> v2(v.size());

    std::copy(v.begin(), v.end(), v2.begin());

    for (auto e : v2) std::cout << e << " ";
    std::cout << std::endl;

}