#include <stdio.h>

int main()
{
    char note1[200], note2[200], temp[200];
    int choice;

    printf("SIMPLE NOTE TOOL FOR ALEX\n");

    while (1)
    {
        printf("\nMENU:\n");
        printf("1. Length of Note\n");
        printf("2. Reverse Note\n");
        printf("3. Compare Two Notes\n");
        printf("4. Copy Note\n");
        printf("5. Concatenate Notes\n");
        printf("6. Convert to UPPERCASE\n");
        printf("7. Convert to lowercase\n");
        printf("8. Capitalize Each Word\n");
        printf("9. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        if (choice == 9)
        {
            printf("Exiting\n");
            return 0;
        }

        if (choice == 3 || choice == 5)
        {
            printf("Enter first note: ");
            fgets(note1, 200, stdin);
            printf("Enter second note: ");
            fgets(note2, 200, stdin);
        }
        else
        {
            printf("Enter note: ");
            fgets(note1, 200, stdin);
        }

        int i, len;

        for (i = 0; note1[i] != '\0'; i++)
            if (note1[i] == '\n')
                note1[i] = '\0';

        for (i = 0; note2[i] != '\0'; i++)
            if (note2[i] == '\n')
                note2[i] = '\0';

        switch (choice)
        {
            case 1:
                len = 0;
                while (note1[len] != '\0')
                    len++;
                printf("Length = %d\n", len);
                break;

            case 2:
                len = 0;
                while (note1[len] != '\0')
                    len++;

                for (i = 0; i < len; i++)
                    temp[i] = note1[len - 1 - i];
                temp[len] = '\0';

                printf("Reversed Note: %s\n", temp);
                break;

            case 3:
                i = 0;
                while (note1[i] != '\0' && note2[i] != '\0' && note1[i] == note2[i])
                    i++;

                if (note1[i] == '\0' && note2[i] == '\0')
                    printf("Notes are SAME.\n");
                else
                    printf("Notes are DIFFERENT.\n");
                break;

            case 4:
                i = 0;
                while (note1[i] != '\0')
                {
                    temp[i] = note1[i];
                    i++;
                }
                temp[i] = '\0';
                printf("Copied Note: %s\n", temp);
                break;
            case 5:

                i = 0;
                while (note1[i] != '\0')
                    i++;

                int j = 0;
                while (note2[j] != '\0')
                {
                    note1[i] = note2[j];
                    i++;
                    j++;
                }
                note1[i] = '\0';

                printf("Merged Note: %s\n", note1);
                break;

            case 6:
                for (i = 0; note1[i] != '\0'; i++)
                    if (note1[i] >= 'a' && note1[i] <= 'z')
                        note1[i] -= 32;

                printf("Uppercase Note: %s\n", note1);
                break;

            case 7:
                for (i = 0; note1[i] != '\0'; i++)
                    if (note1[i] >= 'A' && note1[i] <= 'Z')
                        note1[i] += 32;

                printf("Lowercase Note: %s\n", note1);
                break;

            case 8:
                if (note1[0] >= 'a' && note1[0] <= 'z')
                    note1[0] -= 32;

                for (i = 0; note1[i] != '\0'; i++)
                    if (note1[i] == ' ' && note1[i+1] >= 'a' && note1[i+1] <= 'z')
                        note1[i+1] -= 32;

                printf("Capitalized Note: %s\n", note1);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }
printf("this code is done by Rutvi Ranpariya_25ce100");
    return 0;
}
