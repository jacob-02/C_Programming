#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("matches.csv", "r");
    char line[5000];
    int i = 0, n = 0, k = 0;

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
            char *id = val;
            val = strtok(NULL, ",");

            if (atoi(val) == 2010)
            {
                i++;
            }
            char *season = val;
            char *team1;
            for (int j = 0; j < 3; j++)
            {
                team1 = strtok(NULL, ",");
            }
            char *team2 = strtok(NULL, ",");
            char *toss = strtok(NULL, ",");
            for (int k = 0; k < 4; k++)
            {
                val = strtok(NULL, ",");
            }
            char *winner = val;
            for (int k = 0; k < 3; k++)
            {
                val = strtok(NULL, ",");
            }
            char *mvp = val;
            // if (atoi(season) == 2016)
            // {
            //     printf("The winners of %d are is %s\n",atoi(season), winner);
            // }
            
            if (strcmp(toss, winner))
            {
                n++;
            }
            if (strcmp(team1, "Kolkata Knight Riders") && strcmp(team2, "Royal Challengers Bangalore") && strcmp(team2, "Kolkata Knight Riders") && strcmp(team1, "Royal Challengers Bangalore"))
            {
                k++;
            }
            if ((strcmp(team1, "Chennai Super Kings") && strcmp(team2, "Royal Challengers Bangalore")) && (strcmp(team2, "Chennai Super Kings") && strcmp(team1, "Royal Challengers Bangalore")))
            {
                if (atoi(season) == 2010)
                {
                    printf("The MVP for CSK vs RCB in 2010 %s\n", mvp);
                }
            }
        }
    }
    fclose(fp);
    printf("\nThe number of matches played in 2010 is %d\n", i);
    printf("The number of times the winner and toss winner is same is %d\n", n);
    printf("The number of times that KKR and RCB played are %d\n", k);
}