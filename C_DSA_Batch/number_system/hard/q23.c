#include <stdio.h>

int isPrime(int num)
{
    int i;
    for(i = 2; i <= num / 2; i++)
        if(num % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, count = 0, num = 2, pos = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    while(count < n)
    {
        if(isPrime(num))
        {
            printf("%d ", num + pos * pos);
            pos++;
            count++;
        }
        num++;
    }

    return 0;
}
