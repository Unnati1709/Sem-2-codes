#include <stdio.h>

int main()
{
    double *p, a=5.4578;
    p = &a;
    printf("Address of a: %u\n", p);
    printf("Value of a: %lf", *p);
    return 0;
}