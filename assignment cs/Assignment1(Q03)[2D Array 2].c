/*
Unnati
Q. Write a C program using function to transpose a given 2D array.
*/

#include <stdio.h>

void transpose(int rows, int cols, int arr[rows][cols]) 
{
    int temp;

    for (int x = 0; x < rows; x++) 
       {
        for (int y = x + 1; y < cols; y++) 
             {
            // Swap element at position (i, j) with element at position (j, i)
            temp = arr[x][y];
            arr[x][y] = arr[y][x];
            arr[y][x] = temp;
            }
       }
}

void displayArr(int rows, int cols, int arr[rows][cols]) 
{
    for (int i = 0; i < r; i++)
        {
        for (int j = 0; j < c; j++) 
            {
            printf("%d ", arr[i][j]);
            }
         printf("\n");
       }
}

int main() 
{
    int rows, cols;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter the elements of the 2D Array:\n");
    for (int a = 0; a < rows; a++) 
    {
        for (int b = 0; b < cols; b++) 
        {
            scanf("%d", &arr[a][b]);
        }
    }

    printf("Original 2D Array:\n");
    displayArr(rows, cols, arr);

    // Transpose the matrix
    transpose(rows, cols, arr);

    printf("Transposed 2D Array\n");
    printMatrix(rows, cols, arr);

    return 0;
}
