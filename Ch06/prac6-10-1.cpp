// Define copy assignment oeprator for class Float on prac6-9-2.cpp

#include <iostream>

class Float
{
    float value = 0.0f;

public:
    Float(){ }
    Float(float f) : value(f) { }
    friend Float operator+(Float lhs, Float rhs);
    friend Float operator-(Float lhs, Float rhs);
    friend Float operator*(Float lhs, Float rhs);
    friend Float operator/(Float lhs, Float rhs);
    Float& operator=(const Float& rhs);
};

Float operator+(Float lhs, Float rhs)
{
    return lhs.value + rhs.value;
}

Float operator-(Float lhs, Float rhs)
{
    return lhs.value - rhs.value;
}

Float operator*(Float lhs, Float rhs)
{
    return lhs.value * rhs.value;
}

Float operator/(Float lhs, Float rhs)
{
    return lhs.value / rhs.value;
}

Float& Float::operator=(const Float& rhs)
{
    value = rhs.value;
    return *this;
}

int main()
{
    Float f1(1.0f), f2(2.0f), f3(3.0f), f4(4.0f);
    f1 = f2 + f3;
    f2 = f3 - f4;
    f3 = f4 * f1;
    f4 = f1 / f2;

    return 0;
}