#include "triangle.h"
#include <stdlib.h>
#include <stdio.h>

float area(triangle t)
{
	float a = ((t.a.x*(t.b.y - t.c.y)) + (t.b.x*(t.c.y - t.a.y)) + (t.c.x*(t.a.y - t.b.y)));
	return fabs((0.5 * a));
}
float randNum()
{
	return 1.0 * rand() / RAND_MAX;
}