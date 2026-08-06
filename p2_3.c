#include <stdio.h>

struct employee {
    char name[15];
    int empID;
    float salary; 
};

struct organization {
    char orgName[15];
    int orgID;
    struct employee emp[2];
};

int main()
{
    struct organization org[2];
    for (int i = 0; i < 2; i++) {
        printf("For Organization %d: ", i + 1);
        printf("\nEnter Organization Name: ");
        scanf("%s", &org[i].orgName);
        printf("\nEnter Organization ID: ");
        scanf("%d", &org[i].orgID);

        for (int j = 0; j < 2; j++) {
            printf("\nEnter employee %d name: ", j + 1);
            scanf("%s", &org[i].emp[j].name);
            printf("\nEnter employee %d ID: ", j + 1);
            scanf("%s", &org[i].emp[j].empID);
            printf("\nEnter employee %d salary: ", j + 1);
            scanf("%f", &org[i].emp[j].salary);
        }
    }

    for (int i = 0; i < 2; i++) {
        printf("\nFor Organization %d: ", i + 1);
        printf("\nName: %s", org[i].orgName);
        printf("\nOrganization ID: %d", org[i].orgID);

        for (int j = 0; j < 2; j++) {
            printf("\nEmployee %d Name: %s", j + 1, org[i].emp[j].name);
            printf("\nEmployee %d ID: %d", j + 1, org[i].emp[j].empID);
            printf("\nEmployee %d salary: %f", j + 1, org[i].emp[j].salary);
        }
    }
}
