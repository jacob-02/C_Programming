#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char data[100];
    file = fopen("test.txt", "w");

    printf("Enter the data to be added into the file\n");
    scanf("%[^\n]s", data);

    if (file == NULL)
    {
        printf("The file is not openable\n");
    }

    else
    {
        if (strlen(data) > 0)
        {
            fputs(data, file);
            fputs("\n", file);
        }

        fclose(file);

        printf("Data is succesfully written\nFile closed\n");
        
    }
    
}