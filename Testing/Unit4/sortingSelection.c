#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    int id;
    char name[20];
};
void init_ptr(struct student a[], struct student *p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i] = &a[i];
    }
}

void disp(struct student *p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("ID : %d\tName : %s\n", p[i]->id, p[i]->name);
    }
}

void swap(struct student **lhs, struct student **rhs)
{
    struct student *temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

void selection_sort_name(struct student *p[], int n)
{
    int pos;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(p[pos]->name, p[j]->name) > 0)
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            swap(&p[i], &p[pos]);
        }
    }
}

void selection_sort_roll(struct student *p[], int n)
{
    int pos;
    for (int i = 0; i < n - 1; i++)
    {
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if ((p[pos]->id > p[j]->id))
            {
                pos = j;
            }
        }
        if (pos != i)
        {
            swap(&p[i], &p[pos]);
        }
    }
}

int main()
{
    FILE *fp = fopen("student.csv", "r");
    char line[5000];
    fgets(line, 5000, fp);
    struct student a[60];
    int i = 0;

    if (fp == NULL)
    {
        printf("The file doesn't exist\n");
        return 0;
    }
    else
    {
        while (fgets(line, 5000, fp) != NULL)
        {
            char *val = strtok(line, ",");
            a[i].id = atoi(val);
            val = strtok(NULL, ",");
            strcpy(a[i].name, val);
            i++;
        }
    }
    fclose(fp);
    int n = i;
    struct student *p[60];
    init_ptr(a, p, n);
    disp(p, n);

    printf("Enter the choice\n1 : Sort by name\n2 : Sort by roll\n");
    int k;
    scanf("%d", &k);

    switch (k)
    {
    case 1:
        selection_sort_name(p, n);
        disp(p, n);
        break;

    case 2:
        selection_sort_roll(p, n);
        disp(p, n);
        break;

    default:
        break;
    }
    fp = fopen("student_sorted.csv", "w");

    fprintf(fp, "id,name\n");

    i = 0;

    while (i < n)
    {
        fprintf(fp, "%d,%s\n", p[i]->id, p[i]->name);
        i++;
    }
    fclose(fp);
}