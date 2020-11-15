/*This program illustrates the use of pointers to return multiple values.*/

/*Since we need to return the values of both r and theta from the function polar,\
 we use pointers to main function variables to store these values. */

#include <stdio.h>
#include <math.h>

void polar(float x, float y, float* r, float* theta);
int main()
{
	float x, y;
	printf("Enter the x-coordinate: ");
	scanf("%f", &x);
	printf("Enter the y-coordinate: ");
	scanf("%f", &y);

	float r, theta;
	polar(x, y, &r, &theta);
	printf("\nPolar coordinates of the point (%f, %f) are: (%f, %f)", x, y, r, theta);

	return 0;
}
void polar(float x, float y, float* r, float* theta)
{
	*r = sqrt(x * x + y * y);
	*theta = atan2(y, x);
}
