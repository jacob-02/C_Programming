#include <stdio.h>
#include <stdlib.h>

void structure();
void normal();

struct emp
{
    int no;
    char name[20];
    float salary;
};

struct emp *ptr;

void structure()
{
    printf("Enter the number of elements in the array\n");
    int n;
    scanf("%d", &n);

    ptr = (struct emp *)calloc(n, sizeof(struct emp));

    if (ptr == NULL)
        printf("There is no memory left for allocation\n");

    else
    {
        for (int i = 0; i < n; i++)
        {
            printf("Enter the employee details\n");
            scanf("%d%s%f", &(ptr+i)->no, (ptr+i)->name, &(ptr+i)->salary);
        }

        for (int i = 0; i < n; i++)
        {

            printf("The employee details\n");
            printf("%d\n%s\n%f\n", (ptr+i)->no, (ptr+i)->name, (ptr+i)->salary);
        }
    }
}

void normal()
{
    int *x, n, i;
    printf("Enter the values of n\n");
    scanf("%d", &n);

    x = (int *)calloc(n, sizeof(int));

    if (x == NULL)
        printf("Memory is not allocated\n");

    else
    {
        printf("Memory is succesfully allocated\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d", *(x + i));
        }

        printf("\n");

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d", *(x + i));
        }
    }
}

int main()
{
    structure();
}