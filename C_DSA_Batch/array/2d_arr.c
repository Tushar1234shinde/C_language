#include<stdio.h>
void main(){
    int arr[2][3]={{1,2,3},{4,5,6}};

    // for(int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         printf("arr[%d][%d]=%d\n",i,j,arr[i][j]);
    //     }
    // }

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){

            if(i==1&& j==1){
                arr[i][j]=8;
            }
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}