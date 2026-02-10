#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter how many odd numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", (2 * i) - 1);
    }

    return 0;
}
