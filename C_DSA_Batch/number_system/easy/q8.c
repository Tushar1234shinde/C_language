#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter how many cube numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i * i * i);
    }

    return 0;
}
