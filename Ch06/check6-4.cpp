// Create a smart pointer that receives and manages pointers to dynamically allocated objects in the constructor.
// This smart pointer should call the delete operator in the destructor to release the managed memory area. 
// Also add operator overloading for the arrow and indirect reference operators.

# include <iostream>

class A
{
    int value;

public:
    explicit A(int value): value{value} {}
    void show() const
    {
        std::cout << "A.value:" << value << std::endl;
    }
};

class A_ptr
{
    A *ptr; // In the answer code, ptr was initialized with nullptr.

public:
    explicit A_ptr(A *ptr): ptr{ptr} {}

    ~A_ptr()
    {
        delete ptr;
    }

    A& operator*() const
    {
        return *ptr;
    }

    A* operator->() const
    {
        return ptr;
    }
};



int main()
{
    A_ptr p1(new A(10));
    p1->show();
    (*p1).show();

    return 0;
}