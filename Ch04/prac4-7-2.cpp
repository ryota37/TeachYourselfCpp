// Fix the 4-7-1 code so that the function in the module namespace is called
// from the main() function only with its function name.
// (Hint: Use the "using" declaration.)

#include <iostream>

namespace module
{
    void func()
    {
        std::cout << "module::func()" << std::endl;
    }
}

void func()
{
    std::cout << "::func()" << std::endl;
}

int main()
{
    using module::func;
    func();
    return 0;
}