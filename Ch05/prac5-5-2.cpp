// Define a constructor that recieves std::initializer_list<int> as an argument.
// Enumerate the elements of the std::initializer_list<int> that the constructor recieves.

// You should run the code under C++11 or later.
// e.g. g++ -std=c++11 prac5-5-2.cpp

#include <iostream>
#include <initializer_list>

class IntArray
{
public:
    IntArray(std::initializer_list<int> list)
    {
        for (auto& elem : list)
        {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
    ~IntArray() {};
};

int main()
{
    IntArray arr = {1, 2, 3, 4, 5};

    return 0;
}   
