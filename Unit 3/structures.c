#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};


int main()
{
    struct Student s = {"abc", 43, 78};
    s.marks = 200.9;
    
    printf("%f\n", s.marks);
    printf("%d\n", s.roll_no);
    printf("%s\n", s.name);

    printf("New line\n");

    struct Student s1 = {10, "abc"};

    printf("%f\n", s1.marks);
    printf("%d\n", s1.roll_no);
    printf("%s\n", s1.name);

    printf("New line\n");
    
    struct Student s3 = {name:"Hello", roll_no:7,};

    printf("%f\n", s3.marks);
    printf("%d\n", s3.roll_no);
    printf("%s\n", s3.name);
}
