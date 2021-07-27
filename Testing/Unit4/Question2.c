#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp1 = fopen("Question2.txt", "r");
    FILE *fp2 = fopen("Output2.txt", "w");

    if (fp1 == NULL)
    {
        printf("The file does not exist\n");
        return 0;
    }
    else
    {
        char ch;
        while ((ch = fgetc(fp1)) != EOF)
        {
            if (ch == '\n')
            {
                fputc(',', fp2);
            }
            fputc(ch, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
}