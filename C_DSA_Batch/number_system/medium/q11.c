#include <stdio.h>

int main()
{
    int n, count = 0, num = 2, i, flag;

    printf("Enter how many prime numbers: ");
    scanf("%d", &n);

    while(count < n)
    {
        flag = 1;
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if(flag == 1)
        {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
