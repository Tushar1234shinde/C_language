#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter how many square numbers: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%d ", i * i);
    }

    return 0;
}
