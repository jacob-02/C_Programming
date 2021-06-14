struct node
{
    int info;
    struct node *link;
};

typedef struct node node_t;

struct mylist
{
    node_t *head;
};

typedef struct mylist mylist_t;
void initialize_list()

