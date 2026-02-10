#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter how many even numbers: ");
    scanf("%d", &n);

   for(i = 1; i <= 2*n; i++)
{
    if(i % 2 == 0)
        printf("%d ", i);
}

    return 0;
}

