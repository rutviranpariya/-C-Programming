#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *summary;
    int size;

    printf("Enter initial memory size (number of characters): ");
    scanf("%d", &size);


    summary = (char *)calloc(size, sizeof(char));

    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter the initial short article summary:\n");
    getchar();
    fgets(summary, size, stdin);
    printf("\nStored Summary: %s\n", summary);


    printf("\nEnter new memory size to expand summary (characters): ");
    scanf("%d", &size);

    summary = (char *)realloc(summary, size * sizeof(char));

    if (summary == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("\nEnter the updated (longer) article summary:\n");
    getchar();
    fgets(summary, size, stdin);

    printf("\nUpdated Summary: %s\n", summary);


    free(summary);
    printf("code is done by  Rutvi Ranpariya_25ce100");

    return 0;
}
