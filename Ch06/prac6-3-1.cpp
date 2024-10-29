// Overload the + and - operator that represents positive and negative values
// to the Float class that you made in prac6-2.

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

    Float operator+() const {
        return Float(value);
    }

    Float operator-() const {
        return Float(-value);
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
    f3 = +f1;
    f3.show();
    f3 = -f1;
    f3.show();
    return 0;
}