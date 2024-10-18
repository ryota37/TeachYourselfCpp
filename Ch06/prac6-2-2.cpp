// Add the multiplication and division operator overloads to the Float class in prac6-2-1.cpp.
#include <iostream>

class Float {
public:
    Float(float value) : value{value} {}

    Float operator+(const Float& f) const {
        return Float(value + f.value);
    }

    Float operator-(const Float& f) const {
        return Float(value - f.value);
    }

    Float operator*(const Float& f) const {
        return Float(value * f.value);
    }

    Float operator/(const Float& f) const {
        return Float(value / f.value);
    }

    void show() const {
        std::cout << value << std::endl;
    }

private:
    float value; 
};

int main() {
    Float f1(1.2), f2(2.3), f3(0);
    f3 = f1 + f2;
    f3.show();
    f3 = f1 - f2;
    f3.show();
    f3 = f1 * f2;
    f3.show();
    f3 = f1 / f2;
    f3.show();
    return 0;
}