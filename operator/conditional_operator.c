#include<stdio.h>
void main(){
    int num1;
    int num2;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    (num1>num2)?printf("NUM 1 is greater :%d",num1): printf("Num 2 is greater :%d",num2);

        (num1%2==0)?printf("\nEven"):printf("\nOdd");

}