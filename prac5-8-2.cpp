// Define the move constructor and copy constructor.
// Then call them separately.

#include <iostream>
#include <utility>

class car
{
    int m_speed;
    int m_weight;

public:
    car(int speed, int weight): m_speed(speed), m_weight(weight){}
    car(const car& other): m_speed(other.m_speed), m_weight(other.m_weight)
    {
        std::cout << "Copy constructor called" << std::endl;
    }
    car(car&& other): m_speed(other.m_speed), m_weight(other.m_weight)
    {
        std::cout << "Move constructor called" << std::endl;
    }
};

int main()
{
    car c1(100, 200);
    car c2(c1);
    car c3(std::move(c1));

    return 0;
}   