#include<stdio.h>
void main(){
    int cp;
    int sp;

    printf("Enter values of cost price ");
    scanf("%d",&cp);

        printf("Enter values of selling price ");
    scanf("%d",&sp);

    int temp=sp-cp;

    if(cp>sp){
        printf("Loss of %d Rs.",-1*temp);
    }else{
        printf("Profit of %d Rs.",temp);
    }
}