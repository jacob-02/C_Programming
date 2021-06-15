#include <stdio.h>
#include "ordered_server.c"

int main()
{
    mylist_t mylist;
    initialize_list(&mylist);

    int n, ele;

    printf("Enter the number of elements that you want to enter\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the elements\n");
        scanf("%d", &ele);
        insert_list(&mylist, ele);
    }

    display(&mylist);
    
}