// Prepare "module" namespace,
// then define the same name function in both the namespace and the global namespace.
// Call these functions from main() function separately.

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
    module::func();
    func();
    return 0;
}