// Complete Mini Project

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void input(struct Student s[],int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        printf("\nEnter Student %d Details\n",i+1);

        printf("Roll : ");
        scanf("%d",&s[i].roll);

        getchar();

        printf("Name : ");
        fgets(s[i].name,50,stdin);

        printf("Marks : ");
        scanf("%f",&s[i].marks);
    }
}

void display(struct Student s[],int n)
{
    int i;

    printf("\nStudent Details\n");

    for(i=0;i<n;i++)
    {
        printf("\nRoll : %d\n",s[i].roll);
        printf("Name : %s",s[i].name);
        printf("Marks : %.2f\n",s[i].marks);
    }
}

void average(struct Student s[],int n)
{
    int i;
    float sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+s[i].marks;
    }

    printf("\nAverage Marks = %.2f\n",sum/n);
}

int main()
{
    struct Student s[100];
    int n;

    printf("Enter Number of Students : ");
    scanf("%d",&n);

    input(s,n);

    display(s,n);

    average(s,n);

    return 0;
}