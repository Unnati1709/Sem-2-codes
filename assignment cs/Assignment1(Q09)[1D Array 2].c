/*
Unnati
Q. Create a C program to remove duplicate elements from
an integer array. 
*/

#include <stdio.h>

void removeDupes(int arr[], int *length) 
{
    int a, b, c;
    
    for (a = 0; a < *size; ++a) 
    {
        for (b = a + 1; b < *size;) 
        {
            if (arr[a] == arr[b]) 
            {
               for (c = b; c < *length - 1; ++c) 
               {
               arr[c] = arr[c + 1];
               }
                (*length)--; 
               } 
               else 
                {
                b++;
            }
        }
    }
}

int main() 
{
    int arr[] = {9, 9, 5, 7 , 3 , 2, 1, 1 , 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    for (int i = 0; i < size; ++i) 
    {
        printf("%d ", arr[i]);
    }
    
    remove(arr, &size);
    
    printf("\nAfter removing duplicates: ");
    for (int i = 0; i < size; ++i) 
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
