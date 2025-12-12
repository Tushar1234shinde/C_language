#include<stdio.h>
void main(){

    int a;
    int b;

    printf("Enter value for a:");
    scanf("%d",&a);

        printf("Enter value for b:");
    scanf("%d",&b);

    if(a==b){
        printf("\na is equal to b");
    }

        if(a!=b){
        printf("\na is not equal to b");
    }

        if(a<b){
        printf("\na is less than b");
    }

        if(a<=b){
        printf("\na is less or equal to b");
    }

        if(a>b){
        printf("\na is grater than b");
    }

        if(a>=b){
        printf("\na is grater or equal to b");
    }

    if(0){
        printf("\nalways true");
    }
    

}