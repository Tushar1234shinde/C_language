#include<stdio.h>
void main(){
    char ch;
    printf("Enter the character :"); 
    scanf("%c",&ch);

    if(ch>=48 && ch<= 57){
        printf("%c is a digit [0-9]",ch);
    }
    else if(ch>=65 && ch<=90){
        printf("%c is character [A-Z]",ch);
    }
    else if(ch>=97 && ch<=122){
        printf("%c is character [a-z]",ch);
    }
    else{
        printf("not a digit, not a character ");
    }
}