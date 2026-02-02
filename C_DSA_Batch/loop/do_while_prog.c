#include<stdio.h>
void main(){
    int pass=12345;
    do{
        int temp;
        printf("Enter your password: ");
        scanf("%d",&temp);
        if(temp==pass){
            printf("Access Granted\n");
            break;
    }
        else{
            printf("Incorrect Password. Try Again.\n");
        }
}while(1);
}