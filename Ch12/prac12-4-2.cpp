// Represent the three set of data using std::tuple.
// Then change the value of the tuple.

#include <iostream>
#include <tuple>

int main()
{
    std::tuple<int, double, char> data1(1, 2.3, 'a');
    std::get<0>(data1) = 4;
    std::cout << "data1: " << std::get<0>(data1) << ", " << std::get<1>(data1) << ", " << std::get<2>(data1) << std::endl;
}