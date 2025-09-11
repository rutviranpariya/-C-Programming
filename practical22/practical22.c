#include <stdio.h>

#define ROWS 5
#define SEATS_PER_ROW 8

int main() {
    char seating[ROWS][SEATS_PER_ROW];
    int reservedSeats;
    int row, seat;


    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < SEATS_PER_ROW; j++) {
            seating[i][j] = 'O';
        }
    }


    printf("Enter the number of reserved seats: ");
    scanf("%d", &reservedSeats);


    for (int i = 0; i < reservedSeats; i++) {
        printf("Enter row and seat number for reserved seat %d (e.g., 2 5): ", i + 1);
        scanf("%d %d", &row, &seat);


        if (row >= 1 && row <= ROWS && seat >= 1 && seat <= SEATS_PER_ROW) {
            seating[row - 1][seat - 1] = 'X';
        } else {
            printf("Invalid seat location. Please enter values between 1-%d for rows and 1-%d for seats.\n", ROWS, SEATS_PER_ROW);
            i--;
        }
    }


    printf("\nSeating Chart:\n");
    for (int i = 0; i < ROWS; i++) {
        printf("Row %d: ", i + 1);
        for (int j = 0; j < SEATS_PER_ROW; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    return 0;
}

