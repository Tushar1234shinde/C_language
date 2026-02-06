#include <stdio.h>

int main(void)
{
    int num, quotient, remainder, sum = 0;
    int large = 0, small = 9;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    quotient = num;

    if (num >= 1000 && num <= 9999)
    {
        for (int i = 0; i < 4; i++)
        {
            remainder = quotient % 10;
            quotient = quotient / 10;

            printf("Digit %d: %d\n", i + 1, remainder);
            sum += remainder;
        }
    }
    else
    {
        printf("\nEntered number is not a four digit number\n");
        return 0;
    }

    printf("\nThe sum of digits is: %d\n", sum);

    while (num != 0)
    {
        remainder = num % 10;

        if (remainder > large)
            large = remainder;

        if (remainder < small)
            small = remainder;

        num = num / 10;
    }

    printf("Largest digit is: %d\n", large);
    printf("Smallest digit is: %d\n", small);

    return 0;
}
