// Define a clear() function that recieves an int reference 
// and clear the value of the reference to 0.

#include <iostream>
void clear(int& n)
{
    n = 0;
}

int main()
{
    int n = 5;
    clear(n);
    std::cout << n << std::endl;
}