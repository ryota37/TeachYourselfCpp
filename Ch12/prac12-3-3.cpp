// Sort std::list

#include <iostream>
#include <list>


void print_list(const std::list<int>& list)
{
    for (auto i : list)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list<int> list = {3,7,1,9,5,2,6,4,8};
    print_list(list);
    list.sort();
    print_list(list);

}