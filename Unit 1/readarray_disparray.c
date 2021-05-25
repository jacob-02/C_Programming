#include <stdio.h>
int main()
{
    int a[100], n;
    printf("Enter the number of elements that you want int the array\n");
    scanf("%d", &n);
    printf("Enter the elements\n");
    readarr(a, n);
    printf("The elements in the array are :\n");
    disparr(a ,n);
}

void readarr(int a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

void disparr(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d\n", a[i]);
}