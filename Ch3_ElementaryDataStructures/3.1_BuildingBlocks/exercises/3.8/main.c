#include <stdio.h>
#include "Point.h"

int main()
{
	point a, b, c;

	printf("Enter the coordinates for point a: ");
	scanf("%f%f", &a.x, &a.y);
	printf("Enter the coordinates for point b: ");
	scanf("%f%f", &b.x, &b.y);
	printf("Enter the coordinates for point c: ");
	scanf("%f%f", &c.x, &c.y);

	if (collinearity(a, b, c))printf("\nThese points are COLLINEAR.\n");
	else printf("\nThese points are NOT COLLINEAR.\n");

	return 0;
}