#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node_t;

node_t *head;

void display(node_t *p)
{
    while (p != NULL)
    {
        printf("The element is %d\n", p->data);
        p = p->link;
    }
}
void insert(int element)
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    temp->data = element;
    temp->link = NULL;

    if (head == NULL || element < head->data)
    {
        temp->link = head;
        head = temp;
    }

    else
    {
        node_t *present = head;
        node_t *previous = NULL;

        while (present != NULL && present->data < element)
        {
            previous = present;
            present = present->link;
        }
        if (previous == NULL)
        {
            temp->link = present;
            head = temp;
        }

        else
        {
            temp->link = present;
            previous->link = temp;
        }
    }
}

int main()
{
    head = NULL;
    int n, element;
    printf("Enter the number of nodes that you want to enter\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the element\n");
        scanf("%d", &element);
        insert(element);
    }
    display(head);
}
