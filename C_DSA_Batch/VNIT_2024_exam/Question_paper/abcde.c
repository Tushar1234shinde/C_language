#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int term;
    long long sum = 0;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Find nth term
    term = pow(-1, n-1) * (n*n - n + 1);

    // Find sum of first n terms
    for(i = 1; i <= n; i++) {
        int current = pow(-1, i-1) * (i*i - i + 1);
        printf("Term %d: %d\n", i, current);
        sum += current;
    }

    printf("Nth term = %d\n", term);
    printf("Sum of first %d terms = %lld\n", n, sum);

    return 0;
}