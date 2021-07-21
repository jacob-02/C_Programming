#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("matches.csv", "r");
    FILE *fp1 = fopen("results.txt", "w");
    char *id;
    char buffer[50000];

    if (fp == NULL)
    {
        printf("Error in opening the file\n");
    }
    else
    {
        int count = 0, k;
        char *team1, *team2;

        while (fgets(buffer, 50000, fp) != NULL)
        {
            id = strtok(buffer, ",");
            for (int i = 1; i <= 3; i++)
                strtok(NULL, ",");
            team1 = strtok(NULL, ",");
            team2 = strtok(NULL, ",");

            printf("ID : %s Batting Team %s - Bowling Team %s\n", id, team1, team2);
            fprintf(fp1, "ID : %s Batting Team %s - Bowling Team %s\n", id, team1, team2);
        }
        fclose(fp);
        fclose(fp1);
    }
}