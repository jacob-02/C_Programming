#include <stdio.h>
#include <string.h>

void concatenate(char word[], char post[]);

int main()
{
    char word[] = "Hello", post[] = " Jacob";
    concatenate(word, post);
}

void concatenate(char word[], char post[])
{
    int i = 0, j = 0;

    while(word[i] != '\0')
        ++i;
    
    while (post[j] != '\0')
    {
        word[i] = post[j];
        i++;
        j++;
    }
    
    word[i] = '\0';

    printf("The concatenated word is %s\nLength of the combined word is %ld\n", word, strlen(word));    
}