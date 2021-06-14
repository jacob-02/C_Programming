#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node* link;
};

typedef struct node node_t;
void display(node_t *p);
void free_list(node_t *p);

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

    free_list(s);

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

void free_list(node_t *p)
{
    node_t *d = p;
    while (p != NULL)
    {
        p = p -> link;
        printf("The element is freed is %d\n", d -> info);
        free(d);
        d = p;
    }
    
}
