#include<stdio.h>
void main(){
    float percentage;
    printf("Enter your percentage:");
    scanf("%f", &percentage);

    if(percentage<=100 && percentage>=80){
        printf("Grade is A");
    }
     if(percentage<=79 && percentage >=60){
        printf("Grade is B");
    }
     if(percentage<60 && percentage>=25){
        printf("Grade is C");
    }
     if( percentage<25 && percentage>=0){
        printf("Grade is F");
    }
    if(percentage<0 || percentage>100){
        printf("Invalid percentage");
    }
}