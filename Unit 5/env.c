#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    int i;
    for (int i = 0; envp[i] != NULL; i++)
    {
        printf("%d %s\n", i, envp[i]);
    }
}