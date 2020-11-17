// Program simulating a coin toss situation.
// Getting heads when a is coin tossed is an example of a Bernoulli's trial
// because there can only be two outcomes: yes or no.

#include <stdio.h>
#include <stdlib.h>

int heads() { return rand() < RAND_MAX / 2; }

int main(int argc, char* argv[])
{
	int N = atoi(argv[1]), M = atoi(argv[2]);
	// M: no. of experiments
	// N: no. of coin tosses in each exp

	int i, j, cnt;
	int *f = malloc((N + 1) * sizeof(int));
	// array size N+1 because each experiment can yield any no. of heads: [0,N].

	for (i = 0; i <= N; ++i) f[i] = 0;
	
	for (i = 0; i < M; i++, f[cnt]++)
		for (j = 0, cnt = 0; j <= N; j++)
			if (heads()) cnt++;

	for (i = 0; i <= N; ++i)
	{
		printf("%2d ", i);
		for (j = 0; j < f[i]; j += 10) printf("*");
		// A star is printed for every 10 frequency counts encountered.
		printf("\n");
	}

	return 0;
}