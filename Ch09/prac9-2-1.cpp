// // Write the definition of the member function you defined in prac9-1-1.cpp
//  outside the class template.

#include <iostream>

template <typename T>
class MyClass
{
public:
    T value;
    template <typename U>
    void printValue(U value);
};

template <typename T>
template <typename U>
void MyClass<T>::printValue(U value)
{
    std::cout << value << std::endl;
}

int main()
{
    MyClass<int> myClass;
    myClass.value = 10;
    myClass.printValue(myClass.value);

    MyClass<double> myClass2;
    myClass2.value = 3.14;
    myClass2.printValue(myClass2.value);

    return 0;
}