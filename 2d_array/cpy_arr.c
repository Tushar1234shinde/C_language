#include<stdio.h>
void main(){
    int arr1[2][3];
    int arr2[2][4];
    printf("Enter Values for first array");
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);    }
    }
    //copying logic
     for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            arr2[row][col]=arr1[row][col];
            printf("\n arr2[%d][%d]=%d",row,col,arr2[row][col]);
        }
    }
}