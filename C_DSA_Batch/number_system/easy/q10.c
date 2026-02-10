#include <stdio.h>

int main()
{
    int num, n, i;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter how many multiples: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", num * i);
    }

    return 0;
}
