#include <stdio.h>

struct Student {
    char name[15];
    int rno;
    char address[50];
};

int main()
{
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter student %d name: ", i + 1);
        scanf("%s", &s[i].name);

        printf("Enter Student %d roll number: ", i + 1);
        scanf("%d", &s[i].rno);

        printf("Enter Student %d address: ", i + 1);
        scanf("%s", &s[i].address);
    }
    for (int i = 0; i < 5; i++) {
        printf("\nName of student %d : %s", i + 1, s[i].name);
        printf("\nRoll number of student %d : %d", i + 1, s[i].rno);
        printf("\nAdress of student %d : %s", i + 1, s[i].address);
    }
}
