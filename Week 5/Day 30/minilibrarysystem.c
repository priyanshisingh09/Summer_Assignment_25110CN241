// Mini Library System

#include <stdio.h>

struct Book
{
    int id;
    char name[100];
    char author[100];
};

void display(struct Book b[],int n)
{
    int i;

    printf("\nLibrary Records\n");

    for(i=0;i<n;i++)
    {
        printf("\nBook %d\n",i+1);
        printf("Book ID : %d\n",b[i].id);
        printf("Book Name : %s",b[i].name);
        printf("Author : %s",b[i].author);
    }
}

int main()
{
    struct Book b[100];
    int n,i;

    printf("Enter Number of Books : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Book %d Details\n",i+1);

        printf("Book ID : ");
        scanf("%d",&b[i].id);

        getchar();

        printf("Book Name : ");
        fgets(b[i].name,100,stdin);

        printf("Author Name : ");
        fgets(b[i].author,100,stdin);
    }

    display(b,n);

    return 0;
}