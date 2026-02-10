#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        printf("%d/%d ", i, i + 1);

    return 0;
}
