// 4. Sum of Series

// 1 + 1 + 1 + 3 + 5 + 9 + 17 + 31 + ...
#include <stdio.h>

int main() {
    int n, i;
    int term = 1;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i <= 3)
            term = 1;
        else
            term = term * 2 - 1;

        sum += term;
    }

    printf("Sum = %d", sum);
    return 0;
}
