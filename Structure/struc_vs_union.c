#include <stdio.h>

struct Student {
    int roll;
    float marks;
    char grade;
};

int main() {
    struct Student s1 = {101, 89.5, 'A'};

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);

    return 0;
}

//

// #include <stdio.h>

// union Data {
//     int i;
//     float f;
//     char ch;
// };

// int main() {
//     union Data d;

//     d.i = 10;
//     printf("i = %d\n", d.i);

//     d.f = 3.14;
//     printf("f = %.2f\n", d.f);

//     d.ch = 'A';
//     printf("ch = %c\n", d.ch);

//     return 0;
// }