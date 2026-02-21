// 5. Sum of n terms of Mod 17 Fibonacci Series
#include <stdio.h>

int main() {
    int n, i;
    int a = 1, b = 1, c;
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if(n >= 1) sum += a;
    if(n >= 2) sum += b;

    for(i = 3; i <= n; i++) {
        c = (a + b) % 17;
        sum += c;
        a = b;
        b = c;
    }

    printf("Sum = %d", sum);
    return 0;
}