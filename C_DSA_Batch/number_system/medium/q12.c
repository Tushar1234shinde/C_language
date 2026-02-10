#include <stdio.h>

int main()
{
    int n, i, num = 2, sq = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            printf("%d ", num++);
        else
            printf("%d ", sq * sq++);
    }

    return 0;
}
