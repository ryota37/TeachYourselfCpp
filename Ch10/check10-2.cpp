// Make a class that throws an exception with its constructor under a certain condition.
// Then dynamically allocate an object of the class with the new operator of an array.
// Rule1: Clearly show which constructor and destructor are called.
// Rule2: Catch the exception so that the program does not terminate abnormally.

#include <iostream>

class MyClass
{
private:
    int n;
public:
    MyClass(int n) : n(n)
    {
        std::cout << "Constructor" << std::endl;
        if (n==0) throw 0;
    }    

    ~MyClass()
    {
        std::cout << "Destructor" << std::endl;
    }
};

int main()
{
    try
    {
        MyClass* p = new MyClass[3]{1, 0, 2};
        delete[] p;
    }
    catch (int e)
    {
        std::cout << "Caught an exception " << e << std::endl;
    }
    return 0;
}