#include <stdio.h>
#include <stdlib.h>
char *n;
int i = 1;

int main()
{
    n = (char *)malloc(sizeof(char *));

    n = "Bangalore";

    while (*n != 0)
    {
        printf("The given string for i = %d is %s\n", i, n);
        n++;
        i++;
    }
}