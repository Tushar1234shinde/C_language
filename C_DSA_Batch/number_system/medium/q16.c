#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i*i + i);
    }

    return 0;
}
