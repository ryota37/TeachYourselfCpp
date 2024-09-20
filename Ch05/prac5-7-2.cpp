// Define a member function that returns the reference to a member variable directly.
// The member function should not be a getter or setter.
// Overload it at a const member funciton.

#include <iostream>

class MyClass
{
    int m_value;

public:
    MyClass(int value): m_value(value){}
    int& returnRef(){return m_value;}
    const int& returnRef() const {return m_value;}

};

int main()
{
    MyClass obj(123);
    obj.returnRef() = 456;
    std::cout << obj.returnRef() << std::endl;

    const MyClass obj2(789);
    std::cout << obj2.returnRef() << std::endl;

    return 0;
}