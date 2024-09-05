// fix the class below so that the code can be compiled.
// you can use any intial value.

#include <iostream>

class product
{
    int id;
    std::string name;
    int price;

public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}
}

int main()
{
    product p[4] = 
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},    
    };
}