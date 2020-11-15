/*This is the implementation for the point data type.*/
#include "Point.h"
#include <math.h>
float distance(point a, point b)
{
	float dx = a.x - b.x, dy = a.y - b.y;
	return sqrt(dx * dx + dy * dy);
}