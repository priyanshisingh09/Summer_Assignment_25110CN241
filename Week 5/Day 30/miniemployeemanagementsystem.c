// Mini Employee Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void display(struct Employee e[],int n)
{
    int i;

    printf("\nEmployee Records\n");

    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d\n",i+1);
        printf("ID : %d\n",e[i].id);
        printf("Name : %s",e[i].name);
        printf("Salary : %.2f\n",e[i].salary);
    }
}

int main()
{
    struct Employee e[100];
    int n,i;

    printf("Enter Number of Employees : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee %d Details\n",i+1);

        printf("Employee ID : ");
        scanf("%d",&e[i].id);

        getchar();

        printf("Employee Name : ");
        fgets(e[i].name,50,stdin);

        printf("Salary : ");
        scanf("%f",&e[i].salary);
    }

    display(e,n);

    return 0;
}