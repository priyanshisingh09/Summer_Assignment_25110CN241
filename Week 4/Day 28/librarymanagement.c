// Library Management System

#include <stdio.h>

struct Library
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Library b;

    printf("Enter Book ID: ");
    scanf("%d", &b.id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", b.name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", b.author);

    printf("\nBook Details\n");
    printf("Book ID: %d\n", b.id);
    printf("Book Name: %s\n", b.name);
    printf("Author: %s\n", b.author);

    return 0;
}