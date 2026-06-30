// Student Record System

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\nStudent Records\n");

    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Roll : %d\n",s[i].roll);
        printf("Name : %s",s[i].name);
        printf("Marks : %.2f\n",s[i].marks);
    }
}

int main()
{
    struct Student s[100];
    int n,i;

    printf("Enter Number of Students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Details of Student %d\n",i+1);

        printf("Roll : ");
        scanf("%d",&s[i].roll);

        getchar();

        printf("Name : ");
        fgets(s[i].name,50,stdin);

        printf("Marks : ");
        scanf("%f",&s[i].marks);
    }

    display(s,n);

    return 0;
}