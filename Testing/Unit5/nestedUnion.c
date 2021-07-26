#include <stdio.h>
#include <string.h>

union doctor
{
    union patient
    {
        char name[20];
        int age;
    }p1;
    char name[20];
    int experience;    
}d1;

int main()
{
    strcpy(d1.name, "jacob");
    d1.experience = 97;
    printf("%s\n", d1.name);
    printf("%d\n", d1.experience);
    strcpy(d1.p1.name, "ram");
    printf("%s\n", d1.p1.name);
    d1.p1.age = 35;
    printf("%d\n", d1.p1.age);
}
/*
Output is 
a
97
ram
35

This is because the union can store only one value at a time. As we initial the value of experience, the value of name is no longer jacob. So we get the shown output.
*/
