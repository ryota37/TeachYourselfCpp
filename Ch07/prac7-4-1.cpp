// Using base class that has virtual function and derived class, 
// check that the member function overrided in the derived class is called
// when the virtual function is called from the base class pointer.

#include <iostream>
using namespace std;


class Base
{
public:
    virtual void show() { cout << "base show()" << endl; }
};

class Derived : public Base`
{
public:
    void show() { cout << "derived show()" << endl; }
};

int main()
{
    Base b;
    Derived d;

    Base *bp = &b;
    bp->show();

    bp = &d;
    bp->show();

    return 0;
}