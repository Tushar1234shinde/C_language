#include<stdio.h>
void main(){
    int num;
    printf("Enter a Number :");
    scanf("%d",&num);
    if(num%2==0){
        printf("Given number is even");
    }
    else {
        printf("Given number is odd");
    }

    printf("\n");

    //ternary operator
    (num%2==0)? printf("Given number is even"): printf("Given number is odd");
}