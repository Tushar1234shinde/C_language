#include<stdio.h>
void main(){
    int sp,cp;
    printf("Enter value for selling price ");
    scanf("%d",&sp);
    printf("Enter value for costting price");
    scanf("%d",&cp);

    if(sp>cp){
        int temp=sp-cp; 
        printf("%d",temp);
        printf("\n");
        printf("This profit");
    }
    else{
        int temp=sp-cp; 
        printf("%d",temp);
         printf("\n");
        printf("This is loss");
    }
}