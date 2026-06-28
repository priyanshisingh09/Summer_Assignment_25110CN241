// Bank Account System

#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank b;
    float amount;
    int choice;

    printf("Enter Account Number: ");
    scanf("%d", &b.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &b.balance);

    printf("\n1. Deposit\n2. Withdraw\nEnter Choice: ");
    scanf("%d", &choice);

    printf("Enter Amount: ");
    scanf("%f", &amount);

    if (choice == 1)
        b.balance += amount;
    else if (choice == 2)
    {
        if (amount <= b.balance)
            b.balance -= amount;
        else
            printf("Insufficient Balance\n");
    }

    printf("\nAccount Number: %d\n", b.accNo);
    printf("Name: %s\n", b.name);
    printf("Balance: %.2f\n", b.balance);

    return 0;
}