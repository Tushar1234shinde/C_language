#include <stdio.h>

struct Student {
    int roll;
};

int main() {
    struct Student s[2];

    for (int i = 0; i < 2; i++) {
        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);
    }

    for (int i = 0; i < 2; i++) {
        printf("\nRoll = %d", s[i].roll);
    }

    return 0;
}