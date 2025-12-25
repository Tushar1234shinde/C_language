#include<stdio.h>
void main(){
    int num;
while(1){
    printf("\nEnter a number :");
    scanf("%d",&num);
    if(num!=0){
        if(num%5==0){
            printf("%d is multiple of 5\n",num);
            break;
        }
        else{
            printf("%d is not multiple of 5\n",num);
            continue;
        }
    }
    else{
        break;
    }
}
}