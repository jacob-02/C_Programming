#include <stdio.h>

typedef struct salary
{
    char name[20];
    int id;
    int basic_salary;
    int total_salary;
}salary_t;

void Scan(salary_t* s, int n);
void display(salary_t* s, int n);
int calculate(salary_t* s, int n, int id);
salary_t max(salary_t* s, int n);
