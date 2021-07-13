#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("Match.csv", "r");

    if (fp == NULL)
    {
        printf("The file cannot be opened\n");
    }
    else
    {
        char buffer[500];
        int count = 0;

        while ((fgets(buffer, 500, fp)) != NULL)
        {
            char *value = strtok(buffer, ",");
            char *date = strtok(NULL, ",");

            printf("%s\n", date);
        }
        fclose(fp);
    }
}