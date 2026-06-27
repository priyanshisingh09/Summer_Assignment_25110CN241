// Employee Management System

#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    int n, i, choice, searchId, found=0;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    struct Employee e[n];

    do
    {
        printf("\n1. Add Employees");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nEmployee %d\n",i+1);

                    printf("Enter Employee ID: ");
                    scanf("%d",&e[i].id);

                    printf("Enter Name: ");
                    scanf("%s",e[i].name);

                    printf("Enter Salary: ");
                    scanf("%f",&e[i].salary);
                }
                break;

            case 2:
                printf("\nEmployee Records\n");

                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",e[i].id);
                    printf("\nName: %s",e[i].name);
                    printf("\nSalary: %.2f\n",e[i].salary);
                }
                break;

            case 3:
                found=0;

                printf("Enter Employee ID to Search: ");
                scanf("%d",&searchId);

                for(i=0;i<n;i++)
                {
                    if(e[i].id==searchId)
                    {
                        printf("\nEmployee Found");
                        printf("\nID: %d",e[i].id);
                        printf("\nName: %s",e[i].name);
                        printf("\nSalary: %.2f\n",e[i].salary);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Employee Not Found\n");

                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=4);

    return 0;
}