#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    signal = RED;

    if (signal == RED)
        printf("Stop!\n");
    else if (signal == YELLOW)
        printf("Get Ready!\n");
    else if (signal == GREEN)
        printf("Go!\n");

    return 0;
}