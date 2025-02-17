// Expand a tuple using structured bindings.

# include <iostream>
# include <tuple>
# include <algorithm>

int main()
{
    std::tuple<int, int, int> t = {1, 2, 3};
    auto [a, b, c] = t;

    std::cout << a << " " << b << " " << c << std::endl;
}