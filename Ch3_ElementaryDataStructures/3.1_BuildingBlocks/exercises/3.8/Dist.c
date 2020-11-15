/*This is the implementation for the point data type.*/
#include "Point.h"
#include <math.h>
#include <stdbool.h>

float distance(point a, point b)
{
	float dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}
int slope(point a, point b)
{
	float dx = a.x - b.x, dy = a.y - b.y;
	return ((dy / dx) * (10000));
	// multiplying by 10000 shifts the decimal point to right by 4 places.
	// converting it into int truncates it, so the rest of the decimal places are ignored.
	// so this gives us a numerical tolerance of 10^-4.
}
bool collinearity(point a, point b, point c)
{
	return (slope(a, b) == slope(b, c));
}