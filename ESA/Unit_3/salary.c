#include <stdio.h>
#include "salary.h"

int main()
{
    salary_t s[100];
    printf("Enter the number of employees that you have in the company\n");
    int n;
    scanf("%d", &n);

    Scan(s, n);
}