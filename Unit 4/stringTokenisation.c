#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("Match.csv", "r");
    FILE *fp1 = fopen("abc.txt", "w");

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

            fprintf(fp1, "%s\n", date);
        }
        fclose(fp);
        fclose(fp1);
    }
}