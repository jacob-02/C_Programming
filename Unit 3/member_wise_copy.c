#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
};

int main()
{
    struct student s1 = {44, "jacob"};
    struct student s2 = s1;
    printf("%d %s\n", s2.roll_no, s2.name);
}
