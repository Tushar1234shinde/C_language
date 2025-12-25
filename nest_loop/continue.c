#include<stdio.h>
void main(){
    for(int i=1;i<=5;i++){
        if(i==3){
          break;
        }
        printf("\n %d",i);
    }
    printf("Out of the loop");
}