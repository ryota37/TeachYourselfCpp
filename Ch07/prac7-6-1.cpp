// Perform diamond inheritance following these two rules:
// 1. Call the constructor which recieves the argument of the base class.
// 2. Clarify the place of the called constructor.

#include <iostream>

class Base {
public:
    Base(int n) {
        std::cout << "Base(" << n << ")" << std::endl;
    }
};

class Derived1 : virtual public Base {
public:
    Derived1(int n) : Base(n) {
        std::cout << "Derived1(" << n << ")" << std::endl;
    }
};

class Derived2 : virtual public Base {
public:
    Derived2(int n) : Base(n) {
        std::cout << "Derived2(" << n << ")" << std::endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    Derived3(int n) : Derived1(n), Derived2(n), Base(n) {
        std::cout << "Derived3(" << n << ")" << std::endl;
    }
};

int main() {
    Derived1 obj1(20);
    Derived2 obj2(30);
    Derived3 obj(10);
    return 0;
}