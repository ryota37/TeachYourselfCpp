// Type deduce the template parameter of a class template from 
// an argument that is passed to the constructor.

#include <iostream>

template <typename T>
class MyClass {
public:
    MyClass(T arg) : data(arg) {}
    void print() { std::cout << data << std::endl; }
private:
    T data;
};

int main()
{
    MyClass<int> obj1(123);
    obj1.print();

    MyClass obj2(456);
    obj2.print();

    return 0;
}