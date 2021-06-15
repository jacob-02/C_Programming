#include <stdio.h>
#include <stdlib.h>
#include "orderedList.h"

void initialize_list(mylist_t* p_list)
{
    p_list -> head = NULL;
}

void insert_list(mylist_t* p_list, int e)
{
    node_t* temp = (node_t*)malloc(sizeof(node_t));
    temp -> info = e;
    temp -> link = NULL;

    if(p_list -> head == NULL)
        p_list -> head = temp;
}

void display(node_t *p)
{
    while (p != NULL)
    {
        printf("%d\n", p -> info);
        p = p -> link;
    }
    
}

