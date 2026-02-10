#include <stdio.h>

int main()
{
    int n, i, term = 4;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = term * 2 + 1;
    }

    return 0;
}
