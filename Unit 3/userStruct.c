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

    printf("The user's roll number is %d\n", s1.roll_no);
}