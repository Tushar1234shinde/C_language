#include <stdio.h>

int main() {
    int n, sum = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    if (temp == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
