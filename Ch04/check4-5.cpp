// Show an example of include guard.

#include <iostream>
using namespace std;

void hello()
{
    cout << "Hello, World!" << endl;
}

int main ()
{
    #ifndef MACRO
    #define MACRO hello()
    #endif

    MACRO;

}