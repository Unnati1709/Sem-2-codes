/*
Unnati 
Q. Implement a C program that sorts an array of floating-point 
numbers in ascending order using the bubble sort algorithm. 
Print the sorted array after sorting.
*/

#include <stdio.h>

// Function to perform bubble sort on an array of floating-point numbers
void bubbleSort(float arr[], int n) 
{
    int a, j;
    float temp;
    for (a = 0; a < n-1; a++) 
{
        for (b = 0; b < n-a-1; b++) 
	{
                  if (arr[b] > arr[b+1]) 
	{
                // Swap arr[b] and arr[b+1]
                temp = arr[b];
                arr[b] = arr[b+1];
                arr[b+1] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    float arr[n];
    printf("Enter %d floating-point numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }
    
    // Call the bubble sort function to sort the array
    bubbleSort(arr, n);
    
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
