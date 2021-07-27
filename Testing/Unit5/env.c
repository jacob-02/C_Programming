#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char argv[])
{
    // char *p;
    // p = getenv("PATH");
    // printf("The env is %s\n", p);
    char *p = getenv("PATH");

    if (p == NULL)
    {
        printf("Path is not available\n");
    }
    else
    {
        printf("Before setting the string :\n%s\n", p);
        strcat(p, ":.");
        char new[100000];
        strcpy(new, "PATH =");
        strcat(new, p);
        putenv(new);
        printf("The new path is :\n%s\n", new);
    }
}