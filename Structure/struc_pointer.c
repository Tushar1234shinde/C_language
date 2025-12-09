#include <stdio.h>

struct Student {
    int roll;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    printf("Enter Roll: ");
    scanf("%d", &p->roll);

    printf("Roll = %d", p->roll);

    return 0;
}