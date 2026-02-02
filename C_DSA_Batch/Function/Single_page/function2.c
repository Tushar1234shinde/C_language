#include <stdio.h>
int a = 5;
int b = 5;

int addition(); //global decleration
int main()
{
    int z = addition(); // calling

    printf("Sum is : %d", z);

    return z;
}

int addition() 
{
    int c = 6;
    return a + b;
}
