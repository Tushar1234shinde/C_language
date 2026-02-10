#include <stdio.h>

int main()
{
    int n, i, k = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 != 0)
            printf("%d ", k * k);
        else
        {
            printf("%d ", 2 * k * k);
            k++;
        }
    }

    return 0;
}
