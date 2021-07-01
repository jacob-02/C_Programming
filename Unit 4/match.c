#include <stdio.h>
#include <string.h> 

int main ()
{
    // open the file
    FILE *fp = fopen("Match.csv","r");
    char line[5000];

    int count = 0;

    // Return if could not open file
    if (fp == NULL)
      return 0;

    else
    {
        while (fgets(line, 5000, fp) != NULL)
        {
            char* val = strtok(line, ",");
            val = strtok(NULL, ",");
            if (strcmp(val, "Eden Gardens") != 0) //returns a pointer to the first token in the string. If no token, null is returned
            {
                count++;
            }
        }
        
    }
 
    fclose(fp);

    printf("The number of matches in fielding is %d\n", count);
}