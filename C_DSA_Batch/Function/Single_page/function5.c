#include <stdio.h>

int swap(int a, int b);

int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a,b);
}

int swap(int x, int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("After swapping: a = %d, b = %d\n", x, y);
    return 0;
}
