#include <stdio.h>

void rev(int *, int);

int main()
{
    int arr[20], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter elements of the array: \n");
    for (i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    rev(&arr,n);
    printf("Output: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }
    return 0;
}

void rev(int *arr, int n)
{
    int temp, i, j;
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            temp=*(arr+j);
            *(arr+j)=*(arr+j+1);
            *(arr+j+1)=temp;
        }
    }
}