Write a C program to generate the Fibonacci series 
up to n terms using a function.

#include <stdio.h>

void fib(int n) 
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 0; i < n; i++) 
    {
        if (i <= 1)
            c = i;
        else 
        {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", c);
    }
    printf("\n");
}

int main() 
{
    int n;

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);

    fib(n);

    return 0;
}
