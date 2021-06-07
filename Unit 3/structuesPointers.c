#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
}s, s1 = {"abc", 19, 30};

int main()
{
    printf("%f\n", s.marks);
    printf("%d\n", s.roll_no);
    printf("%s\n", s.name);

    printf("%f\n", s1.marks);
    printf("%d\n", s1.roll_no);
    printf("%s\n", s1.name);
}