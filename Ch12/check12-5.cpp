// Count the number of elements in a container that is the same as the first elements of the container.
// Do not include the first element in the count.

# include <iostream>
# include <vector>
# include <algorithm>

int main()
{
    std::vector<int> my_vector = {1, 2, 1, 3, 4, 1, 5, 1};
    int answer = std::count(my_vector.begin() + 1, my_vector.end(), my_vector[0]);
    std::cout << answer << std::endl;
}