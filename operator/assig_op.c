#include <stdio.h>
void main()
{
    int x = 2;
    int y = 5;
    // assignment operator
    int a = x + y;

    int add = 2;
    add += 4;
    printf("\n%d", add);

    int sub = 5;
    sub -= 2;
    printf("\n%d", sub);

    int mult = 5;
    mult *= 2;
    printf("\n%d", mult);

    int div = 5;
    div /= 2;
    printf("\n%d", div);

    int mod = 5;
    mod %= 2;
    printf("\n%d", mod);
}