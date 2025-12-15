#include<stdio.h>
void main(){
    int age;
    printf("Enter your age :");
    scanf("%d",&age);

    if(age<=18){
        printf("You are not eligible for voting / driving license");
    }
    else{
        printf("You are eligible for voting / driving license");
    }
    // int ag_marks;

    // printf("Enter aggregate marks :");
    // scanf("%d",&ag_marks);

    // if(ag_marks>=60){
    //     printf("You are eligible");
    // }
    // else{
    //     printf("You are not eligible");
    // }
}