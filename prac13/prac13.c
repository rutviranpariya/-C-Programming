#include <stdio.h>

int main() {
    int current_level = 0;
    int refill_rate = 10;
    int max_capacity = 100;


    while (current_level < max_capacity) {
        current_level += refill_rate;
        if (current_level > max_capacity) {
            current_level = max_capacity;
        }
        printf("Current water level: %d liters\n", current_level);
    }


    printf("Tank is full.\n");

    return 0;
}
