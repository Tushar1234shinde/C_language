#include<stdio.h>
void main(){
    int num;

    printf("\nEnter a number:");
    scanf("%d",&num);

    if(num%2==0){
        
        printf("Given number is even");
        printf("\nNumber is %d",num);
    }
    else{
        printf("Given number is odd");
        printf("\nNumber is %d",num);
    }
}