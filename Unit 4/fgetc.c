// #include <stdio.h>

// int main()
// {
//     FILE *fp = fopen("test.txt", "r");

//     if (fp == NULL)
//     {
//         printf("Error in opening the file\n");
//     }
//     else
//     {
//         char ch;
//         while ((ch = fgetc(fp) != EOF))
//         {
//             fputc(ch, stdout);
//         }
//         fclose(fp);
//     }
    
// }

#include <stdio.h>
 
int main ()
{
    // open the file
    FILE *fp = fopen("test.txt","r");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    do
    {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for list ending
        if (c == '\n')
            break ;
 
        printf("%c", c);
    }  while(1);
 
    fclose(fp);

    printf("\n");
}
 
int main ()
{
    // open the file
    FILE *fp = fopen("test.txt","r");
 
    // Return if could not open file
    if (fp == NULL)
      return 0;
 
    do
    {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for end of file
        if (feof(fp))
            break ;
 
        printf("%c", c);
    }  while(1);
 
    fclose(fp);
    
    printf("\n");
}