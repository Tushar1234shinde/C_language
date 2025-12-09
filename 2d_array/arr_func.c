#include<stdio.h>
void array_function(int a[2][3],int no){
for(int row=0;row<no;row++){
        for(int col=0;col<3;col++){
            printf("\n%d",a[row][col]);
        } }}
void main(){
int arr[2][3];
int num;
printf("\nEnter Values for row and col\n");
    scanf("%d",&num);

printf("\nEnter Values for array\n");
 for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    array_function(arr,num);
}