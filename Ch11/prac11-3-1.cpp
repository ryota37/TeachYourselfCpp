// Downcast with static_cast.

class Base
{
public:
    virtual ~Base() {}
};

class Derived : public Base
{
};

int main()
{
    Base* base_ptr = new Base;
    Derived* derived_ptr = static_cast<Derived*>(base_ptr);
}