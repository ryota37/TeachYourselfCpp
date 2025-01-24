// Define a function template so that the code cause a compile error
// when the argument is a non-integer type.

#include <iostream>

template <typename T>
class MyClass
{
    static_assert(std::is_integral<T>::value, "T must be an integral type.");
public:
    void print(T value)
    {
        std::cout << value << std::endl;
    }
};

int main()
{
    MyClass<int> myClass;
    myClass.print(123);

    // Compile error
    MyClass<double> myClass2;
    myClass2.print(123.456);

    return 0;
}
