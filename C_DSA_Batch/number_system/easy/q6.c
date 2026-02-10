#include <stdio.h>

int main()
{
    int a, r, n, i;
    int term;

    printf("Enter first term: ");
    scanf("%d", &a);

    printf("Enter common ratio: ");
    scanf("%d", &r);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = a;

    for(i = 1; i <= n; i++)
    {
        printf("%d ", term);
        term = term * r;
    }

    return 0;
}
