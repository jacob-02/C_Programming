#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int roll;
    char name[20];
};

void init_ptr(struct student s[], struct student *p[], int n);
void swap(struct student **lhs, struct student **rhs);
void disp(struct student *p[], int n);
void selection_sort_roll_no(struct student *s[], int n);
void selection_sort_names(struct student *s[], int n);

int main()
{
    FILE *fr = fopen("student.csv", "r");
    char a[200];
    fgets(a, 200, fr);
    char *item;
    struct student s[100];

    int i = 0;

    if (fr == NULL)
    {
        printf("Error in opening the file\n");
    }

    else
    {
        while (fgets(a, 200, fr) != NULL)
        {
            item = strtok(a, ",");
            s[i].roll = atoi(item); // the function is used to convert a string argument to an integer.
            item = strtok(NULL, ",");
            strcpy(s[i].name, item);
            i++;
        }

        int n = i;
        fclose(fr);

        struct student *p[100];

        init_ptr(s, p, n);

        disp(p, n);

        int ch;
        printf("Enter the choice\n1.Sort according to Roll No.\n2.Sort according to name\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            selection_sort_roll_no(p, n);
            disp(p, n);
            break;

        case 2:
            selection_sort_names(p, n);
            disp(p, n);
            break;

        default:
            printf("Leaving the program\n");
            break;
        }

        FILE *fw = fopen("student_sorted.csv", "w");
        fprintf(fw, "Roll_number,Name\n");

        i = 0;
        while (i < n)
        {
            fprintf(fw, "%d,%s", p[i]->roll, p[i]->name);
            i++;
        }

        fclose(fw);
    }
}

void init_ptr(struct student s[], struct student *p[], int n)
{
    for (int i = 0; i < n; ++i)
        p[i] = &s[i];
}

void swap(struct student **lhs, struct student **rhs)
{
    struct student *temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}
void disp(struct student *p[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d %s\n", p[i]->roll, p[i]->name);
}
void selection_sort_roll_no(struct student *s[], int n)
{
    int i, pos, j;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
            if ((s[pos]->roll) > (s[j]->roll))
                pos = j;
        if (pos != i)
            swap(&s[pos], &s[i]); // Swap the pointers not the structures
    }
}
void selection_sort_names(struct student *s[], int n)
{
    int i, pos, j;
    for (i = 0; i < n - 1; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
            if (strcmp(s[pos]->name, s[j]->name) > 0)
                pos = j;
        if (pos != i)
            swap(&s[pos], &s[i]);
    }
}