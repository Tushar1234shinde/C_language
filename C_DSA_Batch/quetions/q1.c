#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    if(num>11){
        printf("Number  %d greater than 11", num);
    }
    else{
        printf("Number %d less than or equal to 11",num);
    }
}