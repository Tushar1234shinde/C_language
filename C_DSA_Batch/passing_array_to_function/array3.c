#include <stdio.h>

void passArray(int a, int b, int array[a][b]);

int main() {
    int row, col;

    printf("Enter value for row: ");
    scanf("%d", &row);

    printf("Enter value for column: ");
    scanf("%d", &col);

    int arr_2d[row][col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Enter element for arr_2d[%d][%d]: ", i, j);
            scanf("%d", &arr_2d[i][j]);
        }
    }

    passArray(row, col, arr_2d);
    return 0;
}

void passArray(int a, int b, int array[a][b]) {
    printf("2D Array elements are:\n");
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            printf("Element [%d][%d]: %d\n", i, j, array[i][j]);
        }
    }
}


// #include<stdio.h>
// void passArray(int array[][], int a, int b);

// void main(){
//     const int row,col;
//     printf("\nEnter value for row :");
//     scanf("%d",&row);
//     printf("\nEnter value for column :");
//     scanf("%d",&col);

//     int arr_2d[row][col];

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("Enter element for arr_2d[%d][%d]: ",i,j);
//             scanf("%d",&arr_2d[i][j]);
//         }
//     }

//     passArray(arr_2d,row,col); // Passing 2D array to function

    
// }

// void passArray(int array[][], int a, int b){
//     printf("2D Array elements are:\n");
//     for(int i=0;i<a;i++){
//         for(int j=0;j<b;j++){
//             printf("Element [%d][%d]: %d\n",i,j,array[i][j]);
//         }
//     }
// }