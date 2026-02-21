// 8. Cycle Detection

// Series:f(x)=(xmod17)+(xmod23)

// Since 17 and 23 are prime, the cycle repeats after LCM(17,23) = 391

// We detect cycle by storing first values and checking repetition.

#include <stdio.h>

int main() {
    int visited[1000] = {0};
    int x = 1, value, start = 1;
    int count = 0, sum = 0;

    while(1) {
        value = (x % 17) + (x % 23);

        if(visited[value] == 1)
            break;

        visited[value] = 1;
        sum += value;
        count++;
        x++;
    }

    printf("Cycle Length = %d\n", count);
    printf("Sum of Cycle = %d\n", sum);

    return 0;
}