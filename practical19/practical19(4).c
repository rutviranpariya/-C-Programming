#include <stdio.h>

int main() {
    int n = 4;
    for (int i = 1; i <= n; i++)
        {

        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }


        for (char ch = 'A'; ch < 'A' + i; ch++)
            {
            printf("%c", ch);
        }


        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
            {
            printf("%c", ch);
        }

        printf("\n");
    }


    for (int i = n - 1; i >= 1; i--)
        {

        for (int s = 1; s <= n - i; s++) {

            printf(" ");
        }


        for (char ch = 'A'; ch < 'A' + i; ch++)
            {
            printf("%c", ch);
        }


        for (char ch = 'A' + i - 2; ch >= 'A'; ch--)
            {
            printf("%c", ch);
        }

        printf("\n");
    }

    return 0;
}
