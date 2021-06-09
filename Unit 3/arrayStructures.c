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
}