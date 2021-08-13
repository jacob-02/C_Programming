#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;           //Data of the node
    struct node *next; //Address of the next node
};

void createNodeList(int n); // function to create the list
void displayList();         // function to display the list

struct node *head, *temp, *newnode;

int main()
{
    int n;
    printf("\n\n Linked List : To create and display Singly Linked List :\n");
    printf("-------------------------------------------------------------\n");

    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    int num, i;
    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) //check whether the head is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        // reads data for the node through keyboard

        printf(" Input data for node 1 : ");
        scanf("%d", &newnode->data);
        
        newnode->next = NULL; // links the address field to NULL
        temp = newnode;
        // Creating n nodes and adding to linked list
        for (i = 2; i <= n; i++)
        {
            head = (struct node *)malloc(sizeof(struct node));
            if (head == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf("%d", &head->data);

                head->next = NULL; // links the address field of head with NULL

                temp->next = head; // links previous node i.e. tmp to the head
                temp = temp->next;
            }
        }
    }
}
void displayList()
{
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
            temp = temp->next;                 // advances the position of current node
        }
    }
}
