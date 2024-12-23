// Implicitly specialize a class template that has a member function whose type is the one of the template parameters
// so the class template applies to void type.

#include <iostream>

template <typename T>
class Printer
{
private:
    T t;
public:
    void print(T t)
    {
        std::cout << "Type: not void" << std::endl;
    }
};

template <>
class Printer<void>
{
public:
    void print(void)
    {
        std::cout << "Type: void" << std::endl;
    }
};

int main()
{
    Printer<int> printer1;
    printer1.print(1);
    Printer<double> printer2;
    printer2.print(3.14);
    Printer<char> printer3;
    printer3.print('A');
    Printer<void> printer4;
    printer4.print();
    return 0;
}