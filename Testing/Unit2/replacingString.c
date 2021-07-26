#include <stdio.h>
#include <string.h>

void replicate(char* a, int n)
{
    char d[1000];
    for (int i = 0; i < strlen(a); i++)
    {
        d[i] = a[i];
    }
    
    for (int j = 0; j < n-1; j++)
    {
        strcat(a, d);
    }
}

int main()
{
    char a[1000] = "Jacob";
    printf("Enter the string that u want to replicate\n");
    scanf("%s", a);
    
    printf("Enter the number of times you want to repeat the string\n");
    int n = 10;
    scanf("%d", &n);

    replicate(a, n);
    printf("%s\n", a);
}