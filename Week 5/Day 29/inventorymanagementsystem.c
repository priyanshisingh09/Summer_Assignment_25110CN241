// Inventory Management System

#include <stdio.h>

int main() {
    int id[100], qty[100], n, i, choice, search, found;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter Product ID: ");
        scanf("%d", &id[i]);
        printf("Enter Quantity: ");
        scanf("%d", &qty[i]);
    }

    do {
        printf("\n--- Inventory Management System ---\n");
        printf("1. Display Inventory\n");
        printf("2. Search Product\n");
        printf("3. Update Quantity\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nProduct ID\tQuantity\n");
                for (i = 0; i < n; i++)
                    printf("%d\t\t%d\n", id[i], qty[i]);
                break;

            case 2:
                printf("Enter Product ID to search: ");
                scanf("%d", &search);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        printf("Product Found\n");
                        printf("Quantity = %d\n", qty[i]);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Product not found.\n");
                break;

            case 3:
                printf("Enter Product ID to update: ");
                scanf("%d", &search);
                found = 0;
                for (i = 0; i < n; i++) {
                    if (id[i] == search) {
                        printf("Enter New Quantity: ");
                        scanf("%d", &qty[i]);
                        printf("Quantity Updated.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Product not found.\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}