Create a function that accepts a 2D array of integers 
representing a matrix and its dimensions as parameters. 
The function should calculate and return the sum of the 
elements along the main diagonal of the matrix.

#include <stdio.h>

int sum(int matrix[][10], int rows, int cols) 
{
    int sum = 0;
    int dims = (rows < cols) ? rows : cols; 
    for (int i = 0; i < dims; i++) 
    {
        sum += matrix[i][i];    
    }

    return sum;
}

int main() 
{
    int matrix[3][3] = {
        {6, 7, 3},
        {2, 9, 4},
        {1, 5, 8}
    };
    int rows = 3;
    int cols = 3;

    int sum = sum(matrix, rows, cols);
    printf("Sum of elements along the main diagonal: %d\n", sum);

    return 0;
}
