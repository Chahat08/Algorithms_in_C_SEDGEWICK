/* Ex 3.1: Find the largest and smallest numbers that you can represent with
type int, long int, short int, float and double in your programming environment*/

#include <limits.h>
#include <stdio.h>
#include <float.h>

int main()
{
	printf("Smallest int: %d, Largest int: %d\n", INT_MIN, INT_MAX);
	printf("Smallest long int: %ld, Largest long int: %ld\n", LONG_MIN, LONG_MAX);
	printf("Smallest short int: %d, Largest short int: %d\n", SHRT_MIN, SHRT_MAX);
	printf("Smallest float: %f, Largest float: %f\n", FLT_MIN, FLT_MAX);
	printf("Smallest double: %lf, Largest double: %lf\n", DBL_MIN, DBL_MAX);

	return 0;
}