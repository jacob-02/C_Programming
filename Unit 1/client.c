// This is client.c file
#include "stdio.h"

// This is header file that we have created
// in the beginning.
#include "server.h"
int main()
{
    int a, b;
	printf("Enter the numbers to add: ");
    scanf("%d%d", &a, &b);
	greetings(a, b);
	return 0;
}
