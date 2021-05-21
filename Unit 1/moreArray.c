#include <stdio.h>

int main()
{
    int a[100];
    int n;
    printf("enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");

    for(int i=0; i<=(n-1); i++)
        scanf("%d ", &a[i]);

    for(int i=0; i<n; i++)
        printf("%d ", a[i]);

    int sum = 0;
    for(int i=0; i<n;i++)
        sum += a[i];

    printf("\nSum of the elements in the array: %d\n", sum);   
    printf("The average of the values is equal to : %d\n", sum/n); 
}