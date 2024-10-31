// Explain the funciton that std::unique_ptr provides with the actual code.

// myA. As described in the following code, std::unique_ptr provides the function
// to automatically delete the object when the unique_ptr object goes out of scope.

#include <iostream>
#include <memory>
#include <utility>

class MyClass {
public:
    MyClass() {
        std::cout << "MyClass Constructor called" << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass Destructor called" << std::endl;
    }
};

int main() {
    std::cout << "Create a unique_ptr object" << std::endl;
    std::unique_ptr<MyClass> ptr1(new MyClass);
    std::cout << "Move the unique_ptr object" << std::endl;
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);
    std::cout << "End of main" << std::endl;
}

// A. std::unique_ptrはスマートポインターの一種であり、スコープから抜けてstd::unique_ptrが破棄されると同時に、
// 管理している動的確保したメモリ領域をdelete演算子で破棄してくれます。

// Code

#include <iostream>
#include <memory>

class A
{
public:
    A()
    {
        std::cout << "A constructor" << std::endl;
    }

    ~A()
    {
        std::cout << "A destructor" << std::endl;
    }
};

int main()
{
    auto ptr = std::make_unique<A>();
}