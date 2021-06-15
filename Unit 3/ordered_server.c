#include <stdio.h>
#include <stdlib.h>
#include "orderedList.h"

void initialize_list(mylist_t *p_list)
{
    p_list->head = NULL;
}

void insert_list(mylist_t *p_list, int e)
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    temp->info = e;
    temp->link = NULL;

    if (p_list->head == NULL)
        p_list->head = temp;

    else
    {
        node_t *present = p_list->head;
        node_t *prev = NULL;
        while (present != NULL && present->info < e)
        {
            prev = present;
            present = present->link;
        }

        if (prev == NULL)
        {
            p_list->head = temp;
            temp->link = present;
        }

        else
        {
            temp->link = present;
            prev->link = temp;
        }
    }
}

void display(mylist_t *p_list)
{
    node_t *p = p_list->head;

    if (p == NULL)
        printf("The list is empty\n");

    else
        while (p != NULL)
        {
            printf("%d\n", p->info);
            p = p->link;
        }
}

void free_list(mylist_t* p_list)
{
    node_t* p = p_list -> head;

    if(p == NULL)
    {
        printf("The list is emptied\n");
    }

    else
    {
        node_t *temp = p;
        while (p != NULL)
        {
            free(temp);
            printf("Deleted node has info %d", p -> info);
            temp = p;
            p = p -> link;
        }
        
    }
}
