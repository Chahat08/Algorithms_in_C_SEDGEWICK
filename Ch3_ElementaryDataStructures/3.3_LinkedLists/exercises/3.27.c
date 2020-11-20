typedef struct node* link;
struct node { int item; link next; };

void moveElement(link x, link t)
{
	link y = x->next;
	x->next = t->next;
	t->next = t->next->next;
	x->next->next = y;
}