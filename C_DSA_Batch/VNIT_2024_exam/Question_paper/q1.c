// 1. Sum of Series

// 3/5 + 4/5² + 3/5³ + 4/5⁴ + 3/5⁵ + 4/5⁶ + ...
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(i % 2 != 0)
            sum += 3.0 / pow(5, i);
        else
            sum += 4.0 / pow(5, i);
    }

    printf("Sum = %.5lf", sum);
    return 0;
}
