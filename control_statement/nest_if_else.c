#include<stdio.h>
void main(){
    int age;
    char ch;
        printf("Enter you gender M/F ");
        scanf("%c",&ch);
        printf("Enter age :");
        scanf("%d",&age);
        if(age>=60){
           if(ch=='F'){
            printf("9.75 interest rate ");
           }
           else{
            printf("9.5 interest rate ");
           }
        }
        else{
            printf("8 interest rate");
        }
}