#include <stdio.h>

struct Student {
    int roll;
};

int main() {
    struct Student s;
    s.roll = 10;
    printf("%d", s.roll);
    return 0;
}