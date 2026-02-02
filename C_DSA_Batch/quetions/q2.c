#include<stdio.h>
void main(){
    int  cp;
    int sp;
    printf("Enter cost price and selling price:");
    scanf("%d %d", &cp, &sp);

    if(sp>cp){
        printf("Profit of %d", sp-cp);
    }
    else if(cp>sp){
        printf("Loss of %d", cp-sp);
    }
    else{
        printf("No profit no loss");
    }
}