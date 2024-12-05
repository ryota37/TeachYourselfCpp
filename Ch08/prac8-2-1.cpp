// Display the pi value on the console in the scientific notation.

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::scientific << 3.14159265358979 << std::endl;
    return 0;
}
 
// In the answer code, setf() is used to set the scientific flag.