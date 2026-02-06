// 5. Write a menu driven program for all arithmetic operations. Print the result in proper format. 
// Take the input from user for choice and numbers. 

#include <stdio.h>

int main()
{
    int choice;
    float a, b, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice)
    {
        case 1:
            result = a + b;
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            printf("Division = %.2f\n", a / b);
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
