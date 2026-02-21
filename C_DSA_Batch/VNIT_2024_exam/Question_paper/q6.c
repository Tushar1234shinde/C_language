// 6. Sum of Series

// 1 + 2 + 4 + 7 + 11 + 16 + 22 + ...

// Pattern difference: +1, +2, +3, +4 ...

#include <stdio.h>

int main() {
    int n, i;
    int term = 1;
    int sum = 0;
    int diff = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += term;
        term += diff;
        diff++;
    }

    printf("Sum = %d", sum);
    return 0;
}
