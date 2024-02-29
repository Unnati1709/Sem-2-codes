#include <stdio.h>

int main()
{
    int a, b;
    printf("Value of a = ");
    scanf("%d", &a);
    printf("Value of b = ");
    scanf("%d", &b);
    swap(&a,&b);
    printf("Swaped value of a = %d\n",a);
    printf("Swaped value of b = %d\n",b);
    return 0;
}

void swap(int *x, int *y)
{
    
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
    