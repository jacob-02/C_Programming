#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
};

void read(struct student* s1);
void display(struct student s1);


int main()
{
    struct student s1;
    printf("Enter the roll no\n");
    read(&s1);
    display(s1);
}

void read(struct student* s1)
{
    scanf("%d", &(s1->rollno));
    scanf("%s", s1->name);
}

void display(struct student s1)
{
    printf("%d ", s1.rollno);
    printf("%s\n", s1.name);
}
