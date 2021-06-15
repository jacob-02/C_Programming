#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void init_queue(prio_t *p_queue) // Used to initialize the priority queue
{
    p_queue -> head = NULL;
}

void enque(prio_t *p_q, compo_t *com) // This function creates a node using the component
{
    node_t *temp = (node_t *)malloc(sizeof(node_t));
    strcpy(temp -> c.details, com -> details);
    temp -> c.priority = com -> priority;
    
    temp -> link = p_q -> head;
    p_q -> head = temp;
}

void deque(prio_t *p_q) // used to delete the node from the queue based on the priority
{
    if (p_q -> head == NULL)
        printf("No elements in the Q to delete\n");

    else
    {
        node_t *present = p_q -> head; // present points to wherever head is pointing
        node_t *prev = NULL;

        // prev points to NULL initially. But later one before the present node

        int max = 0;
        node_t *prev_max = NULL; // link field of this points to the node with highest

        while (present != NULL)
        {
            if (present -> c.priority >= max)
            {
                max = present -> c.priority;
                prev_max = prev;
            }
            
            prev = present;
            present = present -> link;
        }

        compo_t compo; // to store the details of removed node. Just for printing purpose

        if (prev_max != NULL)
        {
            //Remove in the middle or the end of the list. The head will not change.
            node_t *temp = prev_max->link;
            prev_max -> link = temp -> link;

            //copy the node information to component before deleting the node

            strcpy(compo.details, temp -> c.details);
            compo.priority = temp -> c.priority;
            free(temp);
        }

        else
        {
            // if the first node has the highest priority, head must change
            node_t *temp = p_q -> head;
            p_q -> head = p_q -> head -> link;

            // copy the node information to component before deleting the node

            strcpy(compo.details, temp -> c.details);
            compo.priority = temp -> c.priority;
            free(temp);
        }
        printf("Deleted component is %s with %d priority\n", compo.details, compo.priority);
    }
}

void disp(const prio_t *p_q) // display the nodes, in turn components of the priority queue
{
    node_t *p = p_q -> head;

    if (p == NULL)
    {
        printf("No elements in queue");
    }
    else
    {
        while (p != NULL)
        {
            printf("%s %d\n", p->c.details, p->c.priority);
            p = p -> link;
        }
    }
}
