// Menu-Driven String Operations System

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str1);

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate String\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter another string: ");
                scanf(" %[^\n]", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                strcpy(str2, str1);
                strrev(str2);
                printf("Reversed String = %s\n", str2);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}