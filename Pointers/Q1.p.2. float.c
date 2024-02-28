#include <stdio.h>

int main()
{
    float *p, a=5.45;
    p = &a;
    printf("Address of a: %u\n", p);
    printf("Value of a: %f", *p);
    return 0;
}