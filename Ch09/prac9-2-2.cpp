// Define a class template, then define a member functiaon.
// Write definition of the member function inside the class template.

#include <iostream>

template <typename T>
class MyClass
{
public:
    T value;
    void printValue()
    {
        std::cout << value << std::endl;
    }
};

int main()
{
    MyClass<int> myClass;
    myClass.value = 10;
    myClass.printValue();

    MyClass<double> myClass2;
    myClass2.value = 3.14;
    myClass2.printValue();

    return 0;
}