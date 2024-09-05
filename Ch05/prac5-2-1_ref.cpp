// The code below is on the book.
// But it causes "delegating constructors are permitted only in C++11" error.
// I tried to solve prac5-2-1.cpp refering to prac5-2-1_ref.cpp.

#include <iostream>

class A
{
    std::string m_name;
    int m_value;

public:
    explicit A(std::string name, int value);
    explicit A(std::string name);
    A();
    void show() const;
};

A::A(std::string name, int value) : m_name(name), m_value(value)
{

}

A::A(std::string name) : A(name, -1)
{

}

A::A() : A("defalut")
{

}

void A::show() const
{
    std::cout << "name: " << m_name << ", value: " << m_value << std::endl;
}

int main ()
{
    A a[4] = 
    {
        A{"first", 42},
        A{{"second"}},
    };

    a[0].show();
    a[1].show();
    a[2].show();
    a[3].show();
}