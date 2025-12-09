#include<stdio.h>
void main(){
    int rem,q,sum=0;
    int no;

    scanf("%d",&no);
    q=no;

    rem=q%10;
    q=q/10;
sum=sum+rem;

rem=q%10;
    q=q/10;
sum=sum+rem;

rem=q%10;
    q=q/10;
sum=sum+rem;

    
printf("Sum of digit is %d",sum);

}