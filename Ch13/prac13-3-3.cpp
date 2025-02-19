// Compare two std::string objects and check if they are orederd in dictionary order

#include <iostream>
#include <string>

int main()
{
    std::string str1 = "Tsukinomito";
    std::string str2 = "Nazonomito";

    int ret = 0;
    ret = str1.compare(str2);
    std::cout << ret << std::endl;

    ret = (str1 < str2);
    std::cout << ret << std::endl;
}