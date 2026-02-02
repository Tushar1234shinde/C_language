#include <stdio.h>

int addittion(int x,int y){
int sum = x+y;
return sum;
}
int main(){

    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    int temp=addittion(a,b);
    printf("Sum is : %d",temp);

return 0;
}

