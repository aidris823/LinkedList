struct node {int i; struct node * next;};
void print_list(struct node * base);
struct node * insert_front(struct node * prev, int x);
struct node * free_list(struct node * ll);

