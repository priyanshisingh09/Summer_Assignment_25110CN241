// Student Record Management System

#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    int n, i, choice, searchRoll, found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    do
    {
        printf("\n1. Add Records");
        printf("\n2. Display Records");
        printf("\n3. Search Record");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i=0;i<n;i++)
                {
                    printf("\nStudent %d\n", i+1);

                    printf("Enter Roll Number: ");
                    scanf("%d",&s[i].roll);

                    printf("Enter Name: ");
                    scanf("%s",s[i].name);

                    printf("Enter Marks: ");
                    scanf("%f",&s[i].marks);
                }
                break;

            case 2:
                printf("\nStudent Records\n");
                for(i=0;i<n;i++)
                {
                    printf("\nRoll: %d",s[i].roll);
                    printf("\nName: %s",s[i].name);
                    printf("\nMarks: %.2f\n",s[i].marks);
                }
                break;

            case 3:
                found=0;
                printf("Enter Roll Number to Search: ");
                scanf("%d",&searchRoll);

                for(i=0;i<n;i++)
                {
                    if(s[i].roll==searchRoll)
                    {
                        printf("\nRecord Found");
                        printf("\nRoll: %d",s[i].roll);
                        printf("\nName: %s",s[i].name);
                        printf("\nMarks: %.2f\n",s[i].marks);
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