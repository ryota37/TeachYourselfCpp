#include <stdio.h>

void call_c(void)
{
    puts("This is a C function.");
}

void call_cpp(void);

int main()
{
    call_cpp();
    return 0;
}