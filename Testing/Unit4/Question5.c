#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct PLAYER
{
    char name[20];
    int id;
    int score;
    int year;
} player[6];

int main()
{
    FILE *fp = fopen("Question5.txt", "r");
    char line[500];
    int i = 0;

    if (fp == NULL)
    {
        printf("The file does not exist\n");
        return 0;
    }

    else
    {
        while (fgets(line, 500, fp) != NULL)
        {
            strcpy(player[i].name, strtok(line, " "));
            player[i].id = atoi(strtok(NULL, " "));
            player[i].score = atoi(strtok(NULL, " "));
            player[i].year = atoi(strtok(NULL, " "));
            ++i;
        }
        fclose(fp);
    }
    printf("The number of records is %d\n", i);
}
