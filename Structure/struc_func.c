#include <stdio.h>

struct Student {
    int roll;
};

void show(struct Student s) {
    printf("Roll = %d", s.roll);
}

int main() {
    struct Student s1;

    printf("Enter Roll: ");
    scanf("%d", &s1.roll);

    show(s1);

    return 0;
}