/*
Unnati
Q. Create a C program to rotate the elements of an integer 
array by a given number of positions to the right.
*/

#include <stdio.h>

void rotateArray(int arr[], int n, int k) 
{
    int temp[k];
   
    for (int i = n - k, j = 0; i < n; i++, j++) 
    {
        temp[j] = arr[i];
    }
    
    for (int i = n - 1; i >= k; i--) 
    {
        arr[i] = arr[i - k];
    }
        for (int i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int arr[] = {9, 5 , 3 , 6 , 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; 
    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    rotateArray(arr, n, k);
    printf("\nArray after rotating by %d positions to the right: ", k);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
