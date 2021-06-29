#include <stdio.h>
#include <string.h> 

int main ()
{
    // open the file
    FILE *fp = fopen("Match.csv","r");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
    
    char n[] = "3";


    // do
    // {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for list ending
        // if (c == n)
            // break;
 
        printf("%c", c);
    // }  while(1);
 
    fclose(fp);

    printf("\n");
}