#include <stdio.h>
#include "queue.h"
int main()
{
    prio_t queue;
    init_queue(&queue);
    compo_t c;

    printf("enter a choice\n1.insert\n2.delete\n3.disp\n4.exit\n");

    int choice;
    scanf("%d", &choice);
    do
    {
        switch (choice)
        {
        case 1:
            printf("enter detail and priority");
            scanf("%s%d", c.details, &c.priority);
            enqueue(&queue, c);
            break;

        case 2:
            dequeue(&queue);
            break;

        case 3:
            display(&queue);
            break;

        default:
            exit(0); // to terminate the program
        }

        printf("choice\n1.insert\n2.delete\n3.disp\n4.exit\n");

        scanf("%d", &choice);
    } while (choice < 4);

    return 0;
}