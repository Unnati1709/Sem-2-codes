Design a function that takes a 2D array of integers 
and its dimensions as parameters. The function should find 
and return the maximum element from the entire array.

#include <stdio.h>

int max(int arr[][5], int r, int c) 
{
    int max = arr[0][0]; 
    for (int x = 0; x < r; x++) 
    {
        for (int y = 0; y < c; y++) 
        {
            if (arr[x][y] > max) 
            {
                max = arr[x][y];
            }
        }
    }

    return max;
}

int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements of array:\n");
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = max(arr, rows, cols);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
