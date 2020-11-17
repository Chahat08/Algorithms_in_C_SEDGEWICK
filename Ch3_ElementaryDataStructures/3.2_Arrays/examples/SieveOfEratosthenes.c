/*Finding prime numbers greater than or equal to N using the sieve of erastosthenes method.*/
#include <stdio.h>
#define N 10000

int main()
{
	int a[N + 1], i, j, k;
	
	for (i = 2; i <= N; ++i) a[i] = 1;

	for (i = 2; i < N; ++i)
	{
		if (a[i])
		{
			for (j = i; j <= N / i; ++j) a[i*j] = 0;
		}
	}

	for (i = 2; i < N; ++i)
	{
		if (a[i]) printf("%3d\t", i);
	}
	return 0;
}