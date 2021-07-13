#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[] = "This is the string that I am splitting according to the space";
    char *token;
    token = strtok(str, " ");
    // printf("%s\n", token);
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}