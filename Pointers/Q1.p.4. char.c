#include <stdio.h>

int main()
{
    char *p, a='U';
    p = &a;
    printf("Address of a: %u\n", p);
    printf("Value of a: %c", *p);
    return 0;
}