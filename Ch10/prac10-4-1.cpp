// Make your own exception class that is derived from std::exception.

#include <iostream>
#include <exception>

class MyException: public std::exception
{
private:
    const char* message;
public:
    MyException(const char* message) : message(message) {}
    virtual const char* what() const throw()
    {
        return message;
    }
};

int main()
{
    try
    {
        throw MyException("MyException");
    }
    catch (MyException& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}   