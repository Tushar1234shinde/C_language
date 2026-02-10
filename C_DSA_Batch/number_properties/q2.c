#include <stdio.h>

int main() {
    int n, rev = 0, temp, rem;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        printf("Palindrome number");
    else
        printf("Not a palindrome number");

    return 0;
}
