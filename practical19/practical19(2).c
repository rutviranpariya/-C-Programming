#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 9;

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 0) {

                printf("%d ", j);
            } else {

                if (j == i + 1 || j == cols - i) {
                    printf("%d ", j);
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
