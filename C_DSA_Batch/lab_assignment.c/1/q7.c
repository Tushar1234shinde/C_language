// 7. Write a program to calculate average and find grade of a student, when entered student’s marks 
// total of three subjects out of 100, as per following table. Use switch ( ) statement. Do not use 
// more than 10 cases in switch. Do not use if-else anywhere in your program. 
// Marks            Grade         
// 00 - 39     :    D
// 40 - 60      :   C
// 61 - 74      :   B
// 75 - 100     :   A
// Otherwise   :    Invalid

#include <stdio.h>

int main(void)
{
    int m1, m2, m3;
    float avg;
    int grade;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;
    grade = avg / 10;

    printf("Average = %.2f\n", avg);

    switch (grade)
    {
        case 10:
        case 9:
        case 8:
        case 7:
            printf("Grade: A\n");
            break;

        case 6:
            printf("Grade: B\n");
            break;

        case 5:
        case 4:
            printf("Grade: C\n");
            break;

        case 3:
        case 2:
        case 1:
        case 0:
            printf("Grade: D\n");
            break;

        default:
            printf("Invalid Marks\n");
    }

    return 0;
}
