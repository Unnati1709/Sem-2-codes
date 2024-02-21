/*
Unnati
Q. Write a C program to reverse a given string.
*/

#include <stdio.h>
#include <string.h>

void reverse(char* st) 
{
    int stLength = strlen(st);
    for (int n = 0; n < stLength/ 2; n++) 
    {
        char rev = st[n];
        st[n] = st[stLength - n - 1];
        st[stLength - n - 1] = rev;
    }
}

int main() 
{
    char str[100];
    
    printf("Enter string: ");
    scanf("%s", str); 
    
    reverse(str);
    
    printf("String after reversing: %s\n", str);
    
    return 0;
}
