// rewrite prac5-2-1.cpp using std::vector.
// add elements and make the number of elements four
// because we didn't explain the way how to specify the length.

// prac5-2-1 includes error-causing code in the answer.
// I feel that solving prac5-2 doesn't make sense, just see the answer code.
// Besides, prac5-2-2 also produces erros shown at the end of this file.

// Answer code

// fix the class below so that the code can be compiled.
// you can use any intial value.

#include <iostream>

class product
{
    int id;
    std::string name;
    int price;

public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}
}

int main()
{
    std::vector<product> p = 
    {
        product{1, "smart phone", 60000},
        product{2, "tablet", 35000},    
    };

    p.push_back(product{});
    p.push_back(product{});
}

// Errors caused by prac5-2-2.cpp

// prac5-2-2.cpp:24:2: error: expected ';' after class
// }
//  ^
//  ;
// prac5-2-2.cpp:30:16: error: expected '(' for function-style cast or type construction
//         product{1, "smart phone", 60000},
//         ~~~~~~~^
// prac5-2-2.cpp:28:26: error: implicit instantiation of undefined template 'std::vector<product>'
//     std::vector<product> p = 
//                          ^
// /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/c++/v1/iosfwd:133:28: note: template is declared here
// class _LIBCPP_TEMPLATE_VIS vector;
//                            ^
// prac5-2-2.cpp:34:24: error: expected '(' for function-style cast or type construction
//     p.push_back(product{});
//                 ~~~~~~~^
// prac5-2-2.cpp:35:24: error: expected '(' for function-style cast or type construction
//     p.push_back(product{});
//                 ~~~~~~~^
// 5 errors generated.
