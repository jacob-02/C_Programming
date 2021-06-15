#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void append()
{
    head = NULL;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data for the node\n");
    scanf("%d", &newnode->data);

    newnode -> next = 0;

    if (head == NULL)
    {
        head = newnode;
    }

    else
    {
        struct node* ptr;
        ptr = head;
        
        while (ptr -> next != NULL)
        {
            ptr = ptr -> next;
        }
        
    }
}
