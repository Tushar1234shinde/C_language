#include <stdio.h>

enum Result { FAIL, PASS, DISTINCTION };

int main() {
    enum Result student1 = PASS;

    if (student1 == PASS)
        printf("Student Passed\n");
    else if (student1 == FAIL)
        printf("Student Failed\n");
    else
        printf("Student got Distinction\n");

    return 0;
}