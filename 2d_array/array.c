#include<stdio.h>
void main(){
    int arr_2d [2][3];
 for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            scanf("%d",(*(arr_2d+row)+col));
        }
    }


    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            printf("\n%d",*(*(arr_2d+row)+col));
        }
    }
}