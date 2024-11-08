// Create an integer class that can do four arithmetic operations

#include <iostream>

class integer
{

    int num;

public:
    integer(int n) : num(n) {}
    integer operator+(integer &a)
    {
        return integer(num + a.num);
    }
    integer operator-(integer &a)
    {
        return integer(num - a.num);
    }
    integer operator*(integer &a)
    {
        return integer(num * a.num);
    }
    integer operator/(integer &a)
    {
        return integer(num / a.num);
    }
    void show()
    {
        std::cout << num << std::endl;
    }
};

int main()
{
    integer a(10), b(20), c(0);

    c = a + b;
    c.show();
    c = a - b;
    c.show();
    c = a * b;
    c.show();
    c = a / b;
    c.show();

    return 0;
}

// comment
// The answer code uses the friend function to achieve the class that can do four arithmetic operations.