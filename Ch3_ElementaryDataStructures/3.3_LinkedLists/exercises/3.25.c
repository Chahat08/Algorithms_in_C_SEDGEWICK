int noOfNodes(link x, link t)
{
	int i = 1;
	while (x->next != t)
	{
		x = x->next;
		++i;
	}
	return i;
}