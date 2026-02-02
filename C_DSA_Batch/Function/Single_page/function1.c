#include <stdio.h>
int a = 5;
int b = 5;

int addition() //local decleration
{
    int c=6;
    return a+b;
}
int main()
{
    int z = addition(); // calling

    printf("Sum is : %d", z);

    return z;
}