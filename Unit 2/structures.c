#include <stdio.h>

struct Student
{
    char name[20];
    int roll_no;
    float marks;
};


int main()
{
    struct Student s;
    s.marks = 200.9;
    
    printf("%f\n", s.marks);
}
