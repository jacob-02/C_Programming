#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    int marks;
};

int main()
{
    // struct student s1[] = {{1, "jacob", 20}, {2, "Play", 80}};

    // for (int i = 0; i < 2; i++)
    // {
    //     printf("The roll number is %d\nThe Name is %s\nThe marks are %d\n", s1[i].roll, s1[i].name, s1[i].marks);
    // }
    // struct student *ptr = s1;
    // printf("%d\n", *ptr);

    struct student ST[] = {{1, "John", 60}, {2, "Jack", 40}, {3, "Jill", 77}, {4, "Sam", 78}, {5, "Dean", 80}};
    struct student *ptr = ST; //&ST is illogical
    printf("\n%d\n", *ptr);   //prints 1
    printf("%d \t %s \t %d\n", ptr->roll, (ptr + 1)->name, (ptr + 2)->marks);
    //prints 1 Jack 77
    ptr++;                  // ptr now points to ST[1]
    printf("\n%d\n", *ptr); //prints 2
}