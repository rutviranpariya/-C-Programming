#include <stdio.h>
#include <string.h>

#define maxbooks 100


char books[maxbooks][50] = {
    "C Programming",
    "Data Structures",
    "Database Systems",
    "Operating Systems",
    "Computer Networks"
};
int totalBooks = 5;


void displayBooks();
int getTotalBooks();
void borrowBook(char* bookName);
float calculateFine(int daysLate);


int main() {
    int choice, daysLate;
    char bookName[50];

    while(1) {
        printf("\n====== Library Menu ======\n");
        printf("1. Display Available Books\n");
        printf("2. Get Total Number of Books\n");
        printf("3. Borrow a Book\n");
        printf("4. Calculate Fine for Overdue Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch(choice) {
            case 1:
                displayBooks();
                break;
            case 2:
                printf("Total number of books: %d\n", getTotalBooks());
                break;
            case 3:
                printf("Enter book name to borrow: ");
                fgets(bookName, sizeof(bookName), stdin);
                bookName[strcspn(bookName, "\n")] = '\0';
                borrowBook(bookName);
                break;
            case 4:
                printf("Enter number of days late: ");
                scanf("%d", &daysLate);
                printf("Fine amount: ₹%.2f\n", calculateFine(daysLate));
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}


void displayBooks() {
    printf("\nAvailable Books:\n");
    for(int i = 0; i < totalBooks; i++) {
        printf("%d. %s\n", i + 1, books[i]);
    }
}


int getTotalBooks() {
    return totalBooks;
}


void borrowBook(char* bookName) {
    int found = 0;
    for(int i = 0; i < totalBooks; i++) {
        if(strcmp(books[i], bookName) == 0) {
            found = 1;
            printf("Book \"%s\" borrowed successfully.\n", bookName);

            for(int j = i; j < totalBooks - 1; j++) {
                strcpy(books[j], books[j+1]);
            }
            totalBooks--;
            break;
        }
    }
    if(!found) {
        printf("Book \"%s\" not found in inventory.\n", bookName);
    }
}


float calculateFine(int daysLate) {
    float finePerDay = 2.0;
    return daysLate * finePerDay;
}
