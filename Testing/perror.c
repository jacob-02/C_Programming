#include <stdio.h>
#include <errno.h>
#include <string.h>
int main()
{
    FILE *fp;
    fp = fopen("File.txt", "r"); // File with this name exist
    fputc('A', fp);               // writing to a file which is opened for read
    printf("value of errno is %d with info:%s\n", errno, strerror(errno));
    perror("Bad code");
    fclose(fp);
}