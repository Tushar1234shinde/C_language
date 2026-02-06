#include<stdio.h>
int main()
{
    int a=3;
    int b=3;

    switch((a>=b))
    {
        case 1:
            printf("a is greater than b\n");
            break;
        case -1:
            printf("a is less to b\n");
            break;
        case 0:
            printf("a is equal to b\n");
            break;
    }
    return 0;
   
    // if(0){
    //     printf("Inside if block\n");
    // }
    // else{
    //     printf("Inside else block\n");
    // }
}