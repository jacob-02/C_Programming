#include <stdio.h>

int main()
{
    FILE *fp = fopen("random.txt", "r");

    if (fp == NULL)
        printf("It cannot be opened\n");

    else
    {
        // printf("%p\n", fp);
        char ch;
        while ((ch = fgetc(fp)) != EOF)
        {
            fputc(ch, stdout);
            printf("%d\n", ftell(fp));
        }
        printf("\n");
        fclose(fp);
    }
}