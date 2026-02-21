// 2. Sum of Series

// 5 + 55 + 555 + 5555 + ...
#include <stdio.h>

int main() {
    int n, i;
    long term = 0;
    long sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        term = term * 10 + 5;
        sum += term;
    }

    printf("Sum = %ld", sum);
    return 0;
}
