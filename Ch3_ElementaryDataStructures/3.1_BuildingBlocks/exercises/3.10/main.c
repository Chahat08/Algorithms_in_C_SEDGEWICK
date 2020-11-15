#include <stdio.h>
#include <stdlib.h>
#include "triangle.h"

int main(int argc, char* argv[])
{
	int n = atoi(argv[1]), i;
	triangle t;
	float a = 0.0;

	for (i = 0; i < n; ++i)
	{
		t.a.x = randNum();
		t.a.y = randNum();
		
		t.b.x = randNum();
		t.b.y = randNum();
		
		t.c.x = randNum();
		t.c.y = randNum();

		a += area(t);
	}

	printf("Average area generated = %f", a / n);
	return 0;
}