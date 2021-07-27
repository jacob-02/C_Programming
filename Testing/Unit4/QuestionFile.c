#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("data.txt", "r");
    char line[50];

    if (fp == NULL)
    {
        printf("The file is not found\n");
    }

    else
    {
        while (fgets(line, 50, fp) != NULL)
        {
            char *val = strtok(line, ",");
            char *price = strtok(NULL, ",");
            char *quantity = strtok(NULL, ",");
            int id = atoi(val), cost = atoi(price), number = atoi(quantity);

            if (cost < 10000)
            {
                printf("ID = %d\tTotal = %d\n", id, cost * number);
            }
        }
    }
    fclose(fp);
}