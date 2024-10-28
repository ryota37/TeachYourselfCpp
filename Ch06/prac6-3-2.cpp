// Overload prepositive and postpositive increment oeprators.
// Then check if those operators can be called seperately.

#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{value} {}

    Integer& operator++()
    {
        value++;
        return *this;
    }

    Integer operator++(int)
    {
        Integer temp = *this;
        value++;
        return temp;
    }

    void show() const
    {
        std::cout << value << std::endl;
    }
};

int main()
{
    Integer i1(1), i2(0);
    i2 = ++i1;
    i2.show();
    i2 = i1++;
    i2.show();
    return 0;
}