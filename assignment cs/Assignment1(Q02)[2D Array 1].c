/*
Unnati
Q. Implement a C program to sort rows of a 2D array in 
ascending order based on the sum of elements in each row.
*/

#include <stdio.h>

#define ROWS 3
#define COLS 3

void sortRows(int arr[ROWS][COLS]) 
{
     // sums of each row (array)
	int rowSum[ROWS]; 
    // for row swapping (Temp array)
	int tempRow[COLS]; 

    // Calculate sum of elements for each row
    for (int r = 0; r < ROWS; r++) 
        {
        rowSum[r] = 0;
        for (int c = 0; c < COLS; c++) 
            {
            rowSum[r] += arr[r][c];
            }
        }

    // Bubble sorting (rowSum array) 
    for (int i = 0; i < ROWS - 1; i++) 
        {
        for (int j = 0; j < ROWS - i - 1; j++) 
            {
            if (rowSum[j] > rowSum[j + 1]) 
                {
                 for (int n = 0; n < COLS; n++) 
                    {
                    tempRow[n] = arr[j][n];
                    arr[j][n] = arr[j + 1][n];
                    arr[j + 1][n] = tempRow[n];
                    }
                int tempSum = rowSum[j];
                rowSum[j] = rowSum[j + 1];
                rowSum[j + 1] = tempSum;
                }
            }
      }
  }

void showArray(int arr[ROWS][COLS]) 
{
    for (int r1 = 0; r1 < ROWS; r1++) 
        {
        for (int c1 = 0; c1 < COLS; c1++)
            {
            printf("%d ", arr[r1][c1]);
            }
        printf("\n");
    }
}

int main() 
{
    int arr[ROWS][COLS] = {{2, 5, 3}, {9, 1, 7}, {6, 3, 8}};

    printf("Original Array:\n");
    showArray(arr);

    sortRows(arr);

    printf("\nAfter sorting rows by sum, array will be:\n");
    showArray(arr);

    return 0;
}
