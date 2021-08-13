#include <stdio.h>
#include "salary.h"

void display(salary_t *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The ID is %d\nThe Name is %s\nThe Basic Salary is %d\n", (s + i)->id, (s + i)->name, (s + i)->basic_salary);
    }
}

void Scan(salary_t *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %d", &(s + i)->id, (s + i)->name, &(s + i)->basic_salary);
    }
}

int calculate(salary_t *s, int n, int id)
{
    int da, hra, total = 0;

    for (int i = 0; i < n; i++)
    {
        if ((s + i)->id == id)
        {
            da = 0.8 * (s + i)->basic_salary;
            hra = 0.2 * (s + i)->basic_salary;
            (s + i)->total_salary = da + hra + (s + i)->basic_salary;
        }
    }
}