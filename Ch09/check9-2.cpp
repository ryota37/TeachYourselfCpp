// Define a partial-specialized class template.
// Then generete instances of both a primary template and the partial-specialized template.

#include <iostream>

template <typename T, typename U>
class A
{
private:
    T value1;
    U value2;

public:
    A(T value1, U value2) : value1(value1), value2(value2) {};
    void hoge()
    {
        std::cout << "Primary:" << value1 << ", " << value2 << std::endl;
    }
};

template <typename T>
class A<T, int>
{
private:
    T value1;
    int value2;


public:
    A(T value1, int value2) : value1(value1), value2(value2) {};
    void hoge()
    {
        std::cout << "Partial-specialized:" << value1 << ", " << value2 << std::endl;
    }
};

int main()
{
    A<int, double> a1(42, 3.14);
    a1.hoge();

    A<int, int> a2(42, 42);
    a2.hoge();

    return 0;
}