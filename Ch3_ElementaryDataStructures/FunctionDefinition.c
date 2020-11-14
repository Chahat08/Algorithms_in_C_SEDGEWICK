/* This program defines a function named lg, which calculates the greatest integer larger than or equal to N, which is provided as its argument.\
 The values of N used are all powers of 10, specifically the powers 1 to 6. */

#include <stdio.h>

int lg(int N)
{
	int i;
	for (i = 0; N > 0; ++i, N /= 2);
	return i;
}

int main()
{
	int i, N;

	for (i = 1, N = 10; i <= 6; N *= 10, ++i)
		printf("%7d %2d %9d\n", N, lg(N), N * lg(N));

	return 0;
}
