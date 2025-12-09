#include <stdio.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Day today = WED;

    if (today == WED) {
        printf("Today is Wednesday");
    }

    return 0;
}