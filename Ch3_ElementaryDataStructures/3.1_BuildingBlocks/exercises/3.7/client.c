#include <stdio.h>
#include "Point.h"

int main(int argc, char* argv[])
{
	int n = atoi(argv[1]), i;
	
	float min_dist, temp;

	point a, b, c;
	printf("Enter the coordinates: ");
	scanf("%f%f", &a.x, &a.y);
	
	printf("Enter the coordinates: ");
	scanf("%f%f", &b.x, &b.y);

	min_dist = distance(a, b);
	for (i = 2; i < n; ++i)
	{
		printf("Enter the coordinates: ");
		scanf("%f%f", &b.x, &b.y);
		temp = distance(a, b);
		if (temp < min_dist) {
			min_dist = temp; c = b;
		}
	}
	printf("\nThe point closest to (%f, %f) is (%f, %f).\n", a.x, a.y, c.x, c.y);
	return 0;
}