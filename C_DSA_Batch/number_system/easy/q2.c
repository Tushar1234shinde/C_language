#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter how many whole numbers: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
