// 4. Divisibility of a number by 9 is defined as follows: 0 and 9 are divisible by 9, any other 
// number is divisible by 9 if and only if the sum of its digits is divisible by 9. Write a c 
// program to determine whether the entered number is divisible by 9, using the definition 
// above. ex

#include <stdio.h>
int main()
{
    int n, sum = 0,rem;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        n = -n;
    }

    if (n == 0 || n == 9)
    {
        printf("The number is divisible by 9.\n");
    }
    else
    {
        while (n > 0)
        { rem = n % 10;
            sum +=rem;
            n = n / 10;
        }
        if (sum % 9 == 0)
        {
            printf("The number is divisible by 9.\n");
        }
        else
        {
            printf("The number is not divisible by 9.\n");
        }

        printf("The sum of the digits is: %d\n", sum);
    }
}