#include <stdio.h>

int main()
{
    int *x, *y, a=5, b=10, c;
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    x = &a;
    y = &b;
    c=*x;
    *x=*y;
    *y=c;
    printf("Swaped value of a = %d\n",a);
    printf("Swaped value of b = %d\n",b);
    return 0;
}
