#include <stdio.h>

int main() {
    float balance = 5000.0;
    float withdrawal_amount;
    int continue_transaction = 1;
    printf("Welcome to the National Bank of Bharat ATM\n");


    while (continue_transaction) {

        printf("\nEnter the amount to withdraw: ");
        scanf("%f", &withdrawal_amount);


        if (withdrawal_amount <= balance) {

            balance -= withdrawal_amount;
            printf("Transaction successful.\n");
            printf("Remaining balance: %.2f\n", balance);
        } else {

            printf("Insufficient balance.\n");
        }


        printf("\nDo you want to make another transaction? (1 for Yes, 0 for No): ");
        scanf("%d", &continue_transaction);
    }

    printf("\nThank you for using the National Bank of Bharat ATM. Goodbye!\n");
     printf("this program is done by Rutvi Ranpariya_25CE100");

    return 0;
}

