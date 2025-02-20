// Output a string that contains a line break to the console using raw string literals.

#include <iostream>

int main()
{
    std::cout << R"spell(
        I am the bone of my sword.
        体は剣で出来ている。

        Steel is my body, and fire is my blood.
        血潮は鉄で 心は硝子。

        I have created over a thousand blades.
        幾たびの戦場を越えて不敗。

        Unknown to Death.
        ただの一度も敗走はなく、

        Nor known to Life.
        ただの一度も理解されない。

        Have withstood pain to create many weapons.
        彼の者は常に独り 剣の丘で勝利に酔う。

        Yet, those hands will never hold anything.
        故に、生涯に意味はなく。

        So as I pray, unlimited blade works.
        その体は、きっと剣で出来ていた。
    )spell" << std::endl;
}