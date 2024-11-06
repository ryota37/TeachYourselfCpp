// Redefine the operator overload of the following code as the friend function.
// The code is the one on prac6-2-2.cpp

#include <iostream>

class Float {
public:
    Float(float value) : value{value} {}

    friend Float operator+(const Float& lhs, float rhs)
    {
        return Float(lhs.value + rhs);
    }

    friend Float operator+(float lhs, const Float& rhs)
    {
        return Float(lhs + rhs.value);
    }

    friend Float operator-(const Float& lhs, float rhs)
    {
        return Float(lhs.value - rhs);
    }

    friend Float operator-(float lhs, const Float& rhs)
    {
        return Float(lhs - rhs.value);
    }

    friend Float operator*(const Float& lhs, float rhs)
    {
        return Float(lhs.value * rhs);
    }

    friend Float operator*(float lhs, const Float& rhs)
    {
        return Float(lhs * rhs.value);
    }

    friend Float operator/(const Float& lhs, float rhs)
    {
        return Float(lhs.value / rhs);
    }

    friend Float operator/(float lhs, const Float& rhs)
    {
        return Float(lhs / rhs.value);
    }

    void show() const {
        std::cout << value << std::endl;
    }

private:
    float value; 
};

int main() {
    Float f1(1.2), f2(2.3), f3(0);
    f3 = f1 + 2.3;
    f3.show();
    f3 = 1.2 + f2;
    f3.show();
    f3 = f1 - 2.3;
    f3.show();
    f3 = 1.2 - f2;
    f3.show();
    f3 = f1 * 2.3;
    f3.show();
    f3 = 1.2 * f2;
    f3.show();
    f3 = f1 / 2.3;
    f3.show();
    f3 = 1.2 / f2;
    f3.show();
    return 0;
}

// Answer code (partial excrept)

// class Float{
// public:
// // ...
//     friend Float operator+(Float lhs, float rhs)
//     {
//         return Float(lhs.value + rhs.value);
//     }
// // ...
// };

// Float operator+(float lhs, Float rhs)
// {
//     return Float(lhs.value + rhs.value);
// }