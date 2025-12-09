#include <stdio.h>

struct Address {
    int pin;
};

struct Student {
    int roll;
    struct Address a;
};

int main() {
    struct Student s;

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Pin: ");
    scanf("%d", &s.a.pin);

    printf("\nRoll = %d", s.roll);
    printf("\nPin = %d", s.a.pin);

    return 0;
}