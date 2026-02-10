// 2. Write a program to count the frequency of a digit in a given number. Both digit & a
// number should be user input. For example, input: d = 5, num = 15205 output: 2.

#include <stdio.h>
int main()
{
    int n, count = 0, d;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The value is: %d\n", n);

    if (n < 0)
    {
        n = -n;
    }

    if (n > 0)
    {
        printf("Enter a digit to count: ");
        scanf("%d", &d);
        while (n > 0)
        {
            if (n % 10 == d)
            {
                count++;
            }
            n = n / 10;
        }
        printf("The frequency of digit %d is: %d\n", d, count);
    }
}