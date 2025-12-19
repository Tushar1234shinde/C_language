#include<stdio.h>
void main(){
    char ch;
    printf("\nM  =  Male\n F  =  Female\n");
    scanf("%c",&ch);

    switch(ch){
        case 'm': case'M':
        printf("YOUR GENDER IS MALE");
        break;
        case 'F': case 'f':
        printf("YOUR GENDER IS FEMALE");
        break;
        default:
        printf("Other Gender");
        break;
    }
}