// Convert an int value to a string value and reconvert it to an int value.
// Then check if the value doesn't change.

# include <iostream>
# include <string>

int main()
{
    int num = 42;
    std::string str = std::to_string(num);
    int num2 = std::stoi(str);
    std::cout << num << std::endl;
    std::cout << num2 << std::endl;
    return 0;
}