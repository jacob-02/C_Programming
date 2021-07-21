#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("argc : %d\n", argc);   
    printf("argv[0] : %s\n", argv[0]);   
    printf("argv[1] : %s\n", argv[1]);   
    printf("argv[2] : %s\n", argv[2]);   
    printf("argv[3] : %s\n", argv[3]);   
    printf("Sum of argv[1] and argv[2] and argv[3] : %d\n", atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]));   
}