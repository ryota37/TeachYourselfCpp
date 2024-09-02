// Define a function that display some messages to multiply nested namespace.
// Assume that the namespace is nested up to 3 levels.
// Then make another name of the namespace and call the function.

#include <iostream>
using namespace std;

namespace A
{
    namespace B
    {
        namespace C
        {
            void display()
            {
                cout << "This is a message from namespace A::B::C" << endl;
            }
        }
    }
}

int main()
{
    namespace ABC = A::B::C;
    ABC::display();
    return 0;
}