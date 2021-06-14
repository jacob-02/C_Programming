#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node* link;
};

typedef struct node node_t;
void display(node_t *p);

int main()
{
    struct node* s;
    s = (node_t*)malloc(sizeof(node_t));
    s -> info = 100;
    s -> link = (node_t*)malloc(sizeof(node_t));
    s -> link -> info = 200;
    s -> link -> link = (node_t*)malloc(sizeof(node_t));
    s -> link -> link -> info = 300;
    s -> link -> link -> link = NULL;

    display(s);
}

void display(node_t *p)
{
    while (p != NULL)
    {
        printf("%d\n", p -> info);
        p = p -> link;
    }
    
}
