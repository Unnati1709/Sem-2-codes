#include <stdio.h>

// Function prototype
unsigned long long factorial(int n);

int main() {
    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (n <= 25) {
        // For n <= 25, we can use regular integer types
        printf("Factorial of %d is %llu\n", n, factorial(n));
    } else {
        // For n > 25, we use unsigned long long
        printf("Factorial of %d is %llu\n", n, factorial(n));
    }

    return 0;
}

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
