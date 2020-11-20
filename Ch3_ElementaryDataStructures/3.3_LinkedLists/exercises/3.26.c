void insertList(link t, link x)
{
	link y = x->next, z = t;
	x->next = t;

	while (z->next != t) z = z->next;
	z->next = y;
}