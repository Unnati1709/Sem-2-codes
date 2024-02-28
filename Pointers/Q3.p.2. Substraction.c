#include <stdio.h>

int main()
{
    int *x, *y, a=15, b=10, s;
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    x = &a;
    y = &b;
    s=*x - *y;
    printf("Difference of a & b = %d\n",s);
    return 0;
}
