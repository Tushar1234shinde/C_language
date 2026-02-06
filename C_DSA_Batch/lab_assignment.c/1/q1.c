// 1. Write a C program to find all roots of a Quadratic equation using switch case. Do not use if
// else anywhere in your program. 

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float d, r1, r2;

    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    switch ((d > 0) - (d < 0))
    {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct\n");
            printf("Root1 = %.2f\n", r1);
            printf("Root2 = %.2f\n", r2);
            break;

        case 0:
            r1 = -b / (2 * a);
            printf("Roots are real and equal\n");
            printf("Root = %.2f\n", r1);
            break;

        case -1:
            printf("Roots are imaginary\n");
            break;
    }

    return 0;
}

