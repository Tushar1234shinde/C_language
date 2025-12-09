#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    signal = GREEN;   

    switch (signal) {
        case RED:
            printf("STOP! Light is RED.\n");
            break;

        case YELLOW:
            printf("GET READY! Light is YELLOW.\n");
            break;

        case GREEN:
            printf("GO! Light is GREEN.\n");
            break;

        default:
            printf("Invalid Signal\n");
    }

    return 0;
}