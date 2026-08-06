#include <stdio.h>

struct Employee
{
    int empID;
    char empName[50];
    float salary;
};

struct Organization
{
    int orgID;
    char orgName[50];
    struct Employee emp[2];
};

int main()
{
    struct Organization org[2];
    int i, j;

    // Input
    for(i = 0; i < 2; i++)
    {
        printf("\nEnter details of Organization %d\n", i + 1);

        printf("Organization ID: ");
        scanf("%d", &org[i].orgID);

        printf("Organization Name: ");
        scanf(" %[^\n]", org[i].orgName);

        for(j = 0; j < 2; j++)
        {
            printf("\nEnter details of Employee %d\n", j + 1);

            printf("Employee ID: ");
            scanf("%d", &org[i].emp[j].empID);

            printf("Employee Name: ");
            scanf(" %[^\n]", org[i].emp[j].empName);

            printf("Salary: ");
            scanf("%f", &org[i].emp[j].salary);
        }
    }

    // Output
    printf("\n========== Organization Details ==========\n");

    for(i = 0; i < 2; i++)
    {
        printf("\nOrganization %d\n", i + 1);
        printf("Organization ID   : %d\n", org[i].orgID);
        printf("Organization Name : %s\n", org[i].orgName);

        for(j = 0; j < 2; j++)
        {
            printf("\nEmployee %d\n", j + 1);
            printf("Employee ID   : %d\n", org[i].emp[j].empID);
            printf("Employee Name : %s\n", org[i].emp[j].empName);
            printf("Salary        : %.2f\n", org[i].emp[j].salary);
        }
    }

    return 0;
}