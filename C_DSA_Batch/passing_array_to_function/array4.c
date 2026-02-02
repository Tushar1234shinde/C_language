#include <stdio.h>
void passArray(int array[][10], int a, int b);

void main()
{
    int row = 2, col = 2;

    int arr_2d[2][2];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element for arr_2d[%d][%d]: ", i, j);
            scanf("%d", &arr_2d[i][j]);
        }
    }

    passArray(arr_2d[row][col], row, col); // Passing 2D array to function
}

void passArray(int array[][10], int a, int b)
{
    printf("2D Array elements are:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Element [%d][%d]: %d\n", i, j, array[i][j]);
        }
    }
}