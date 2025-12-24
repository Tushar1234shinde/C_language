#include<stdio.h>
void main(){
    int counter=1,choice;
    int a=5;int b=2;
    int c;
    do{
        printf("\nMenu \n1. ADD \n2. SUBTRACT ");
        printf("\nEnter Your Choice ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            c=a+b;
            printf("Addition is %d",c);
            break;
            case 2:
            c=a-b;
            printf("Subtraction is %d",c);
            break;
            default:
            printf("Invalid Input");
        }
counter++;
    }while(counter<=4);
    printf("\nOut of do while loop ");
}