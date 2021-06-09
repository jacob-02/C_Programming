#include <stdio.h>

// case 1
// struct dob
// {
//     int date, month, year;
// };

// struct student
// {
//     int roll_no;
//     char name[20];
//     int marks;
//     struct dob d1;
// };

// case 2

struct student
{
    int roll_no;
    char name[20];
    int marks;
    struct dob
    {
        int date, month, year;
    } d1;
};

int main()
{
    struct student s1 = {24, "John", 78, {20, 3, 2000}};
    printf("Roll no %d\n", s1.roll_no);
    printf("Name = %s\n", s1.name);
    printf("Marks = %d\n", s1.marks);
    printf("Date = %d/%d/%d\n", s1.d1.date, s1.d1.month, s1.d1.year);
}