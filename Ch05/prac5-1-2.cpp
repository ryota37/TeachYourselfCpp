// Enumerate elements of an array using only pointers.
// Do not use the range for statement or the array index.

#include <iostream>

void enumerate (int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << *array << std::endl;
        array++;
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4};
    enumerate(array, 5);
}