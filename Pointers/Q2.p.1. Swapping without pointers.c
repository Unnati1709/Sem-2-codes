#include <stdio.h>

int main()
{
    int *p, a=5, b=10, c;
    printf("Value of a = %d\n",a);
    printf("Value of b = %d\n",b);
    c=a;
    a=b;
    b=c;
    printf("Swaped value of a = %d\n",a);
    printf("Swaped value of b = %d\n",b);
    return 0;
}