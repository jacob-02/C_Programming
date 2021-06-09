#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    int marks;
}s1[20];

struct student s2[10];

int main()
{
    struct student s3[30];
    struct student s4[] = {{1, "John", 45}, {2, "Jill", 70}, {3, "Jacob", 55}};
    struct student s5[3] = {1, "John", 45, 2, "Jill", 70,3, "Jacob", 55};
    struct student s6[5] = {1, "John", 45};

    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter the details of student %d\n", i);
        scanf("%d", &s3[i].roll_no);
        scanf("%s", s3[i].name);
        scanf("%d", &s3[i].marks);
    }

    printf("The details of the students are\n");

    for(int i = 0; i < n; i++)
    {
        printf("The details of student %d\n", i);
        printf("%d\n", s3[i].roll_no);
        printf("%s\n", s3[i].name);
        printf("%d\n\n", s3[i].marks);
    }
}