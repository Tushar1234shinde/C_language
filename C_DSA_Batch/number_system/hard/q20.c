#include <stdio.h>

int main()
{
    int n, i, a = 1, b = 2;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            printf("%d%d ", a, b);
        else
        {
            printf("%d%d ", b, a);
            b++;
        }
    }

    return 0;
}
