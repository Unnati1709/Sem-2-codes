Write a function that accepts a 2D array of integers 
representing a matrix and its dimensions as parameters. 
The function should determine whether the matrix is symmetric 
(i.e., equal to its transpose) and return 1 if it is, otherwise return 0.
#include <stdio.h>

int symm(int arr[][100], int row, int col) 
{
    int p, q;
    
      if (row != col)
        return 0;

    for (p = 0; p < row; p++) 
    {
        for (q = 0; q < col; q++) 
        {
            if (arr[p][q] != arr[q][p])
                return 0;
        }
    }
    
    return 1;
}

int main() 
{
    int r, c, i, j;
    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    
    int matrix[100][100];
    
    printf("Enter the elements:\n");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < cols; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    if (symm(matrix, rows, cols))
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");
    
    return 0;
}


