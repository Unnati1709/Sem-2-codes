#include <stdio.h>

int main()
{
    int *p, a=5;
    p = &a;
    printf("Address of a: %p\n", p);
    printf("Value of a: %d", *p);
    return 0;
}