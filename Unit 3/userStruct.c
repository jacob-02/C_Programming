#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s1;
    printf("Enter the roll no\n");
    scanf("%d", &s1.roll_no);

    printf("Enter the student's name\n");
    scanf("%s", s1.name);

    printf("Enter the student's marks\n");
    scanf("%f", &s1.marks);

    printf("The user's roll number is %d\nThe user's name is %s\nThe user's marks is %f\n", s1.roll_no, s1.name, s1.marks);
}