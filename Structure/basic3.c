#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s;

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    printf("\nRoll = %d", s.roll);
    printf("\nMarks = %.2f", s.marks);

    return 0;
}