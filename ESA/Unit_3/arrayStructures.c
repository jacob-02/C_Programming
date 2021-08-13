#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int marks;
};

int main()
{
    struct student s1[] = {{1, "jacob", 20}, {2, "Play", 80}};

    for (int i = 0; i < 2; i++)
    {
        printf("The roll number is %d\nThe Name is %s\nThe marks are %d\n", s1[i].roll, s1[i].name, s1[i].marks);
    }
}