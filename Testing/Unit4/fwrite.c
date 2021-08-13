#include <stdio.h>

struct student
{
    char name[10];
    int roll;
    float marks;
};

int main()
{
    FILE* p = fopen("abc.txt", "w");
    struct student student_1 = {"Tina", 12, 88.123};
    fwrite(&student_1, sizeof(student_1), 1, p);
    fclose(p);
}
