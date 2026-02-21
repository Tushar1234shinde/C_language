// 7. Sum of Series

// 1 + 2 + 3 + 5 + 9 + 17 + 33 + 65 + ...

// Pattern:
// From 4th term → next = (previous × 2) - 1

#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    int term;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i == 1) term = 1;
        else if(i == 2) term = 2;
        else if(i == 3) term = 3;
        else term = term * 2 - 1;

        sum += term;
    }

    printf("Sum = %d", sum);
    return 0;
}
