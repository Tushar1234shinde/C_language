#include<stdio.h>
void main(){
     int choice;
    printf("\n1. English\n 2. Hindi\n 3. Marathi\n");
   
    scanf("%d",&choice);

    switch(4){
        case 1:
        printf("You have selected English");
        break;
        case 2:
        printf("You have selected Hindi");
        break;
        case 3:
        printf("You have selected Marathi");
        break;

        default:
        printf("Invalid number ");
        break;
    }
    printf("\nOut of switch case");
}