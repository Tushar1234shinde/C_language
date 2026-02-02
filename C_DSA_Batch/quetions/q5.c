#include<stdio.h>
void main(){
    int choice;
    printf("Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your choice (1-4): ");
    scanf("%d", &choice);
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    switch(choice){
        case 1:
            printf("Result: %d\n", a + b);
            break;
        case 2:
            printf("Result: %d\n", a - b);
            break;
        case 3:
            printf("Result: %d\n", a * b);
            break;
        case 4:
            if(b != 0){
                printf("Result: %.2f\n", (float)a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select a valid option (1-4).\n");
    }
}