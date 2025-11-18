#include <stdio.h>

int main()
{
    int n, i;
    long long a = 1, b = 1, c;

    printf("Enter the number of months: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Invalid input. Months must be 1 or more.\n");
        return 0;
    }

    printf("\nSavings Growth Series:\n");

    if (n >= 1)
        printf("Month 1: %lld\n", a);
    if (n >= 2)
        printf("Month 2: %lld\n", b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("Month %d: %lld\n", i, c);
        a = b;
        b = c;
    }
    printf("this code is done by Rutvi Ranpariya_25ce100");

    return 0;
}

