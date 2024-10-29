// Represent the five relation operators (==, !=, >, <=, >=) 
// using the relational operator (<) and logical operators (!, &&, ||).

#include <iostream>

class Integer {
    int value;
public:
    Integer(int value) : value{value} {}

    bool operator==(const Integer& i) const;
    bool operator!=(const Integer& i) const;
    bool operator>(const Integer& i) const;
    bool operator<(const Integer& i) const;
    bool operator<=(const Integer& i) const;
    bool operator>=(const Integer& i) const;
};

bool Integer::operator==(const Integer& i) const {
    return !(value < i.value) && !(i < *this);
}

bool Integer::operator!=(const Integer& i) const {
    return !(*this == i);
}

bool Integer::operator>(const Integer& i) const {
    return i < *this;
}

bool Integer::operator<(const Integer& i) const {
    return value < i.value;
}

bool Integer::operator<=(const Integer& i) const {
    return !(i < *this);
}

bool Integer::operator>=(const Integer& i) const {
    return !(value < i.value);
}

int main() {
    Integer i1{10};
    Integer i2{20};

    std::cout << std::boolalpha;
    std::cout << (i1 == i2) << std::endl;
    std::cout << (i1 != i2) << std::endl;
    std::cout << (i1 > i2) << std::endl;
    std::cout << (i1 < i2) << std::endl;
    std::cout << (i1 <= i2) << std::endl;
    std::cout << (i1 >= i2) << std::endl;

    return 0;
}