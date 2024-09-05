// fix the class below so that the code can be compiled.
// you can use any intial value.

#include <iostream>

class product
{
    int id = 0;
    std::string name = "not available";
    int price = 0;

public:
    product() {}
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}
};

int main()
{
    product p[4] = 
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},    
    };
}

// This is the answer code, but it causes warning and erros below.

// prac5-2-1_ans.cpp:8:12: warning: default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]
//     int id = 0;
//            ^
// prac5-2-1_ans.cpp:9:22: warning: default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]
//     std::string name = "not available";
//                      ^
// prac5-2-1_ans.cpp:10:15: warning: default member initializer for non-static data member is a C++11 extension [-Wc++11-extensions]
//     int price = 0;
//               ^
// prac5-2-1_ans.cpp:22:16: error: expected '(' for function-style cast or type construction
//         product{1, "smart phone", 60000},
//         ~~~~~~~^