#include <stdio.h>

int main()
{
    int n, i, term = 2, diff = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term += diff;
        diff += 2;
    }

    return 0;
}

