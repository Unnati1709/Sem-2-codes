#include <stdio.h>

int main()
{
    int *p, a[100],i;
    p=a;
    printf("Enter elements:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }

    printf("Output:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}
