#include <stdio.h>
void main()
{
    int num1;
    int num2;

    // addition
    printf("\n Value for num1 :");
    scanf("%d", &num1);
    printf("\n Value for num2 :");
    scanf("%d", &num2);
    int add = num1 + num2;
    printf("Addition of two number :%d", add);

        // subtraction
    printf("\n Value for num1 :");
    scanf("%d", &num1);
    printf("\n Value for num2 :");
    scanf("%d", &num2);
    int sub = num1 - num2;
    printf("\nSubtraction of two number :%d", sub);

        // multiplication
    printf("\n Value for num1 :");
    scanf("%d", &num1);
    printf("\n Value for num2 :");
    scanf("%d", &num2);
    int mult = num1 * num2;
    printf("\nMultiplication of two number :%d", mult);

        // division
    printf("\n Value for num1 :");
    scanf("%d", &num1);
    printf("\n Value for num2 :");
    scanf("%d", &num2);
    int div = num1 / num2;
    printf("\nDivision of two number :%d", div);

        // modulus
    printf("\n Value for num1 :");
    scanf("%d", &num1);
    printf("\n Value for num2 :");
    scanf("%d", &num2);
    int mod = num1 % num2;
    printf("\nModulus of two number :%d", mod);
}