// Define a reverse() function that reverses an array in the following code.
// The function receives an array and its size as arguments.

#include <iostream>

// Define a reverse() function here.

void reverse(int* array, int size)
{
    int new_array[size];
    for (int i = 0; i < size; i++)
    {
        new_array[i] = array[size - i - 1];
    }
    for (int i = 0; i < size; i++)
    {
        array[i] = new_array[i];
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4};
    reverse(array,5);
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}