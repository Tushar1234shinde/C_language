#include <stdio.h>

int main()
{
    int n, i, num = 100;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", num);
        num -= 10;
    }

    return 0;
}
