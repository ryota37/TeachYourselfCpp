// Dynamically allocate an int array, then define an allocate() function
// that return the allocated address of the array.
// The allocate() function recieves only the length of the array as an argument.
// Initialize all the elements of the array to 0.

#include <iostream>

int* allocate(int length)
{
    int* array = new int[length];
    for (int i = 0; i < length; ++i)
    {
        array[i] = 0;
    }
    return array;
}

int main()
{
    int* array = allocate(5);
    for (int i = 0; i < 5; ++i)
    {
        std::cout << array[i] << std::endl;
    }
    delete[] array;
}

// Answer
// int* allocate(int n)
// {
//     int* array = new int[n]{};
// }
