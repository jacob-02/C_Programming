// #include <stdio.h>

// int main()
// {
//     FILE *fp = fopen("random.txt", "r");

//     if (fp == NULL)
//         printf("It cannot be opened\n");

//     else
//     {
//         // printf("%p\n", fp);
//         char ch;
//         while ((ch = fgetc(fp)) != EOF)
//         {
//             fputc(ch, stdout);
//             printf("%d\n", ftell(fp));
//         }
//         printf("\n");
//         fclose(fp);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     FILE *fp1 = fopen("random.txt", "r");
//     FILE *fp2 = fopen("data.txt", "w");

//     char buffer[500];

//     if (fp1 == NULL || fp2 == NULL)
//     {
//         printf("The file has some issues\n");
//     }

//     else
//     {
//         while (fgets(buffer, 500, fp1) != NULL)
//         {
//             fputs(buffer, fp2);
//         }
//         fclose(fp1);
//         fclose(fp2);
//     }
// }

#include <stdio.h>

int main()
{
    FILE *fp1 = fopen("random.txt", "r");
    FILE *fp2 = fopen("data.txt", "w");

    if (fp1 == NULL || fp2 == NULL)
    {
        printf("The file has some issues\n");
    }

    else
    {
        int a, temp = 0, count = 0;

        while (!feof(fp1))
        {
            fscanf(fp1, "%d", &a);
            temp = temp + a;
            fprintf(fp2, "%d    ", a);
            count++;
        }
        fclose(fp1);
        fclose(fp2);
        printf("The sum of the %d numbers is %d\n", count, temp);
    }
}