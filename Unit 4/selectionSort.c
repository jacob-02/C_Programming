#include <stdio.h>

void read(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int a[], int n)
{
    int min, i, j;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(&a[min], &a[i]);
        }
    }
}

int main()
{
    int a[10], n;
    printf("\nEnter the size of the array\n");
    scanf("%d", &n);

    printf("\nEnter the elements of the array\n");
    read(a, n);

    printf("\nBefore\n");
    display(a, n);

    printf("\nAfter\n");
    sort(a, n);
    display(a, n);
    
    printf("\n");
}