#include <stdio.h>

int main() {
    int a, b, sum;
    char choice;

    for (;;) {   // Infinite loop
        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        sum = a + b;
        printf("Sum = %d\n", sum);

        printf("Do you want to add more numbers? (y/n): ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'y':
            case 'Y':
                continue;   // Repeat loop

            case 'n':
            case 'N':
                printf("Program ended.\n");
                return 0;   // Exit program

            default:
                printf("Invalid choice! Exiting program.\n");
                return 0;
        }
    }
}
