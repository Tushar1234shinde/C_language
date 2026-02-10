#include <stdio.h>

int main()
{
    int n, i, a = 2, b = 3, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for(i = 3; i <= n; i++)
    {
        c = a + b + 1;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
