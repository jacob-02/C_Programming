#include <stdio.h>
#include <stdlib.h>

typedef struct component
{
    char details[100];
    int priority;
} compo_t;

typedef struct component compo_t;

struct node
{
    compo_t c;
    struct node *link;
};

typedef struct node node_t;

struct prio_queue
{
    node_t *head;
};

typedef struct prio_queue prio_t;

void init_queue(prio_t *p_queue);
void enqueue(prio_t *p_q, compo_t c);
void dequeue(prio_t *p_q);
void display(const prio_t *p_q);
