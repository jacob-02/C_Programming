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

struct emp* ptr;

void structure()
{
    ptr = (struct emp *)realloc(ptr, 5 * sizeof(struct emp));

    if (ptr == NULL)
        printf("There is no memory left for allocation\n");

    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Enter the employee details\n");
            scanf("%d%s%f", &(ptr+i)->no, (ptr+i)->name, &(ptr+i)->salary);
        }

        for (int i = 0; i < 5; i++)
        {

            printf("The employee details\n");
            printf("%d\n%s\n%f\n", (ptr+i)->no, (ptr+i)->name, (ptr+i)->salary);
        }
    }

    ptr = (struct emp *)realloc(ptr, 6 * sizeof(struct emp));

    if (ptr == NULL)
        printf("There is no memory left for allocation\n");

    else
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Enter the employee details\n");
            scanf("%d%s%f", &(ptr+i)->no, (ptr+i)->name, &(ptr+i)->salary);
        }

        for (int i = 0; i < 6; i++)
        {

            printf("The employee details\n");
            printf("%d\n%s\n%f\n", (ptr+i)->no, (ptr+i)->name, (ptr+i)->salary);
        }
    }
}


void normal()
{
    int *p = (int *)malloc(10 * sizeof(int));

    if(p == NULL)
        printf("The memory is allocated\n");

    else
    {
        printf("Initial address is %p\n", p);
        printf("Enter the elements\n");

        for(int i = 0; i < 10; i++)
            scanf("%d", (p + i));
        
        printf("The elements are\n");

        for (int i = 0; i < 3; i++)
            printf("%d\n", *(p + i));
        
    }

    p = (int *)realloc(p, 3 * sizeof(int));   

    if(p == NULL)
        printf("Memory is not allocated\n");
    
    else
    {
        printf("The new address is %p\n", p);

        for (int i = 0; i < 11; i++)
        {
            printf("%d\n", *(p + i));
        }
        
    }
}

int main()
{
    structure();
}