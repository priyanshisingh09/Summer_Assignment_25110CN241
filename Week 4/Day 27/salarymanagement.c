// Salary Management System

#include <stdio.h>

struct Salary
{
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float total;
};

int main()
{
    int n, i, choice, searchId, found=0;

    printf("Enter number of employees: ");
    scanf("%d",&n);

    struct Salary s[n];

    do
    {
        printf("\n1. Add Salary Details");
        printf("\n2. Display Salary Details");
        printf("\n3. Search Salary");
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
                    scanf("%d",&s[i].id);

                    printf("Enter Name: ");
                    scanf("%s",s[i].name);

                    printf("Enter Basic Salary: ");
                    scanf("%f",&s[i].basic);

                    printf("Enter HRA: ");
                    scanf("%f",&s[i].hra);

                    printf("Enter DA: ");
                    scanf("%f",&s[i].da);

                    s[i].total=s[i].basic+s[i].hra+s[i].da;
                }
                break;

            case 2:
                printf("\nSalary Records\n");

                for(i=0;i<n;i++)
                {
                    printf("\nID: %d",s[i].id);
                    printf("\nName: %s",s[i].name);
                    printf("\nBasic Salary: %.2f",s[i].basic);
                    printf("\nHRA: %.2f",s[i].hra);
                    printf("\nDA: %.2f",s[i].da);
                    printf("\nTotal Salary: %.2f\n",s[i].total);
                }
                break;

            case 3:
                found=0;

                printf("Enter Employee ID to Search: ");
                scanf("%d",&searchId);

                for(i=0;i<n;i++)
                {
                    if(s[i].id==searchId)
                    {
                        printf("\nSalary Record Found");
                        printf("\nID: %d",s[i].id);
                        printf("\nName: %s",s[i].name);
                        printf("\nBasic Salary: %.2f",s[i].basic);
                        printf("\nHRA: %.2f",s[i].hra);
                        printf("\nDA: %.2f",s[i].da);
                        printf("\nTotal Salary: %.2f\n",s[i].total);
                        found=1;
                        break;
                    }
                }

                if(found==0)
                    printf("Record Not Found\n");

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