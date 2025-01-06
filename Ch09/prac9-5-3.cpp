// Set a class template as a formal argument of a function.
// Implement so that the template parameter of the class temlate is type infered via calling the function.

#include <iostream>

template <typename T>
class A
{
private:
    T a;
    T b;
public:
    A(T a, T b) : a(a), b(b) {};
    T add() { return a + b; };
};

template <typename T>
void print(A<T> a)
{
    std::cout << a.add() << std::endl;
};

int main()
{
    print(A<int>(1, 2));
    print(A<double>(3.14, 2.71));

    return 0;
}