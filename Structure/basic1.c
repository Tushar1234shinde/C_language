#include <stdio.h>

int main() {
    struct Student {
        int roll;
    };

    struct Student s;
    s.roll = 20;
    printf("%d", s.roll);
    return 0;
}