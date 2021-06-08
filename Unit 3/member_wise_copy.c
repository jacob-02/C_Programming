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
    printf("%d %s ", s2.roll_no, s2.name);
    printf("%p %p\n", &s2.roll_no, &s2.name);   // This is to show that the copy acquires a new memory and doesn't refer to the location of the variable from where it was copied
    printf("%d %s ", s1.roll_no, s1.name);
    printf("%p %p\n", &s1.roll_no, &s1.name);
}
