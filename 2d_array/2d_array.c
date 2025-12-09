#include<stdio.h>
void main(){
    int arr2[][3]={{1,2,3},{4,5,6},{4,5,6},{4,5,6}};

    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            printf("\n%d",arr2[row][col]);
        }
    }
}