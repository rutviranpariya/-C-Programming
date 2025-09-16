#include <stdio.h>

int maxProfit(int prices[], int n) {
    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int main() {
    int prices1[] = {20, 25, 15, 30, 10, 50};
    int prices2[] = {10, 8, 6, 4, 2};
    int prices3[] = {100, 180, 260, 310, 40, 535, 695};
    int prices4[] = {30, 20, 25, 40, 25, 50, 35};
    int prices5[] = {5, 5, 5, 5, 5};

    printf("Test Case 1 Output (Profit): %d\n", maxProfit(prices1, sizeof(prices1) / sizeof(prices1[0])));
    printf("Test Case 2 Output (Profit): %d\n", maxProfit(prices2, sizeof(prices2) / sizeof(prices2[0])));
    printf("Test Case 3 Output (Profit): %d\n", maxProfit(prices3, sizeof(prices3) / sizeof(prices3[0])));
    printf("Test Case 4 Output (Profit): %d\n", maxProfit(prices4, sizeof(prices4) / sizeof(prices4[0])));
    printf("Test Case 5 Output (Profit): %d\n", maxProfit(prices5, sizeof(prices5) / sizeof(prices5[0])));

    return 0;
}
