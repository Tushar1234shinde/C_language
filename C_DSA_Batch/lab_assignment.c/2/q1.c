// 1. Write a program that determines the largest of the digits in a number given by the user. 
// For example, input: num = 75820, output: 8.

#include <stdio.h>
int main()
{
    int n, temp, large=0;
    printf("Enter a number: ");
    scanf("%d", &n);

  
    printf("The absolute value is: %d\n", n);

    for (int i=0;i>=0;i++)
    {
        
        temp = n % 10;
        if (temp > large)
        {
            large = temp;
        }
        n = n / 10;
    }
    printf("The largest digit is: %d\n", large);
}