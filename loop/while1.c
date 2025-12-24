#include<stdio.h>
void main(){
    int i=0,sum=0,num;
    while(1){
        printf("\nEnter a value for number :");
        scanf("%d",&num);
        if(num!=0){
        sum=sum+num;
        }
        else{
            break;
        }
    }
    printf("\nSum Is %d ",sum);
}