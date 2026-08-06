#include <stdio.h>

struct Student {
    char name[15];
    int rno;
    char address[50];
};

int main()
{
    struct Student s;
    printf("Enter student name: ");
    scanf("%s", &s.name);

    printf("Enter Student roll number: ");
    scanf("%d", &s.rno);

    printf("Enter Student address: ");
    scanf("%s", &s.address);

    printf("Name: %s", s.name);
    printf("\nRoll number: %d", s.rno);
    printf("\nAdress: %s", s.address);
}
