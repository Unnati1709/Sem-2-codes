Write a C program to calculate the power of a number 
using a function.

#include <stdio.h>

double power(double numb, int pow) 
{
    double ans = 1.0;
    int i;

    if (pow < 0) 
    {
        numb = 1 / numb;
        pow = -pow;
    }

    for (i = 0; i < pow; ++i) 
    {
        ans *= numb;
    }

    return ans;
}

int main() 
{
    double base, result;
    int expo;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &expo);

    result = power(base, expo);

    printf("Result: %.2lf\n", result);

    return 0;
}
