// fix the class below so that the code can be compiled.
// you can use any intial value.

// Note: use default constructor
// It causes "delegating constructors are permitted only in C++11" error.
// refer to prac5-2-1_ref.cpp

#include <iostream>

class product
{
    int id;
    std::string name;
    int price;

public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}
    explicit product(int id, std::string name)
        : product(id, name, 0) {}
    explicit product(int id)
        : product(id, "unknown", 0) {}
    product()
        : product(0) {};
};

int main()
{
    product p[4] = 
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},    
    };
}