#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    char line[500];

    while (fgets(line, 50, stdin) != NULL)
    {
        char *val = strtok(line, " ");
        char *price = strtok(NULL, " ");
        char *quantity = strtok(NULL, " ");
        int id = atoi(val), cost = atoi(price), number = atoi(quantity);

        if (cost < 10000)
        {
            printf("ID = %d\tTotal = %d\n", id, cost * number);
        }
    }
}