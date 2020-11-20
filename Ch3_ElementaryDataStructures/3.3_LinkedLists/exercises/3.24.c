#include <stdio.h>
#include <stdlib.h>

typedef struct node* link;
struct node { int item; link next; };

int numberOfNodes(link x)
{
	int n = 1;
	link t = x;

	while (t->next != x) 
	{
		t = t->next;
		++n;
	}

	return n - 1;
}

void createList(link x, int N)
{
	int i;
	link t = malloc(sizeof(*t));
	t = x;

	for (i = 0; i < N; ++i)
	{
		t = (t->next = malloc(sizeof(*t))); 
		t->next = x;
	}
}

int main()
{
	// taking the no. of nodes to be a random int bw 1 and 100.
	int N = (rand() % 100) + 1; 

	link x = malloc(sizeof(*x));

	// creating a circular linked list
	createList(x, N); 
	
	printf("n = %d\n", numberOfNodes(x));

	// to confirm that the number of nodes calculated by our program is correct.
	printf("N = %d", N);

	return 0;
}