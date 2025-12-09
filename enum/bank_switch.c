#include <stdio.h>

enum Menu { BALANCE = 1, DEPOSIT, WITHDRAW, EXIT };

int main() {
    int choice;
    float balance = 5000;

    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch ((enum Menu)choice) {
        case BALANCE:
            printf("Your Balance is: %.2f\n", balance);
            break;

        case DEPOSIT:
            printf("Deposit Selected\n");
            break;

        case WITHDRAW:
            printf("Withdraw Selected\n");
            break;

        case EXIT:
            printf("Thank You!\n");
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}