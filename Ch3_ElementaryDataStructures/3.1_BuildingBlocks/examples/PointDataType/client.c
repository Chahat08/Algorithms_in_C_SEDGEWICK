/*This is the client program for the Point data type.*/
#include <stdio.h>
#include <stdlib.h>
#include "Point.h"
int main(int argc, char* argv[])
{
	point a, b;
	// Comment lines 9-12 and uncomment lines 13-16 to get user input at runtime.
	a.x = atof(argv[1]);
	a.y = atof(argv[2]);
	b.x = atof(argv[3]);
	b.y = atof(argv[4]);
	/*printf("Enter x, y for point a: ");
	scanf("%f%f", &a.x, &a.y);
	printf("Enter x, y for point b: ");
	scanf("%f%f", &b.x, &b.y);*/

	printf("DISTANCE B/W THE POINTS: %f",distance(a, b));
	return 0;
}