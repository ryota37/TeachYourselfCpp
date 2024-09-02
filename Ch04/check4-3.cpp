// Define next() function as inline function that return the next(+1) int value of the argument.

#include <iostream>
using namespace std;

inline int next(int x);

int next(int x)
{
    return x + 1;
}

int main ()
{
    int x = 5;
    cout << next(x) << endl;
    return 0;
}