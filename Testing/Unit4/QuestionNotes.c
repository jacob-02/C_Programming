#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("matches.csv", "r");
    char line[5000];
    int i = 0;

    if (fp == NULL)
    {
        printf("The file does not exist\n");
        return 0;
    }
    else
    {
        while (fgets(line, 5000, fp) != NULL)
        {
            char *val = strtok(line, ",");
            val = strtok(NULL, ",");

            if (atoi(val) == 2008)
            {
                i++;
            }
        }
    }
    fclose(fp);
    printf("The number of matches played is %d\n", i);
}