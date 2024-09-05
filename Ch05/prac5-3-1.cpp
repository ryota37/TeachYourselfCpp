// Allocate a class dynamically using a new operator.
// Clarify when the contructor and the destructor are called.

#include <iostream>

class dyna_class {
    public:
        dyna_class() {
            std::cout << "Constructor is called." << std::endl;
        }
        ~dyna_class() {
            std::cout << "Destructor is called." << std::endl;
        }
};
 
int main()
{
    std::cout << "main() start" << std::endl;
    dyna_class* dyna = new dyna_class;
    std::cout << "new executed" << std::endl;
    delete dyna;
    std::cout << "delete executed" << std::endl;
}