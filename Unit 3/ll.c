#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;;

void append()
{
    int i = 0, count = 0;

    head = NULL;

    while (i == 0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter the data for the node\n");
        scanf("%d", &newnode->data);

        newnode->next = 0;

        if (head == NULL)
        {
            head = newnode = temp;
        }

        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Press 0 to continue, else press 1\n");
        scanf("%d", &i);
    }
}

int main()
{
    append();
    struct node *temp;
    if (newnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        temp = newnode;
        while (temp != NULL)
        {
            printf(" Data = %d\n", temp->data); // prints the data of current node
            temp = temp->data;               // advances the position of current node
        }
    }
}