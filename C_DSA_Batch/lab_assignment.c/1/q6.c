// 6. Write a menu driven program for conversion operations. Print the result in proper format. Take 
// the input from user for choice and consider floating point value for number. 
// a. Liter - Gallon. 
// b. Kilometer - Miles. 
// c. Meter – Inches. 
// d. Cubic centimeter - Cubic inches. 
// e. Foot pound – Newton meter. 
// f. default

#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    printf("Conversion Menu:\n");
    printf("1. Liter to Gallon\n");
    printf("2. Kilometer to Miles\n");
    printf("3. Meter to Inches\n");
    printf("4. Cubic centimeter to Cubic inches\n");
    printf("5. Foot pound to Newton meter\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter value: ");
    scanf("%f", &value);

    switch (choice)
    {
        case 1:
            result = value * 0.264172;
            printf("Gallons = %.3f\n", result);
            break;

        case 2:
            result = value * 0.621371;
            printf("Miles = %.3f\n", result);
            break;

        case 3:
            result = value * 39.3701;
            printf("Inches = %.3f\n", result);
            break;

        case 4:
            result = value * 0.0610237;
            printf("Cubic Inches = %.3f\n", result);
            break;

        case 5:
            result = value * 1.35582;
            printf("Newton Meter = %.3f\n", result);
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
