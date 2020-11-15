/* This is the client file. It uses the functions declared in the interface,\
which are defined in the implementation. */

// This program calculates the average and standard deviation of N numbers.
// Both, the average and the standard deviation, are calculated in the same single pass.
// The method is described here: https://www.strchr.com/standard_deviation_in_one_pass

#include <stdio.h>
#include <math.h>
#include "Num.h"

int main(int argc, char* argv[])
{	
	int i, N = atoi(argv[1]);
	float m1 = 0.0, m2 = 0.0;
	numType x;
	for(i=0; i<N; ++i)
	{
	   x = randNum();
	   m1 += ((float) x)/N;
	   m2 += ((float) x*x)/N;
	}
	printf("       Average: %f\n", m1);
	printf("Std. deviation: %f\n", sqrt(m2-m1*m1));
	return 0;
}