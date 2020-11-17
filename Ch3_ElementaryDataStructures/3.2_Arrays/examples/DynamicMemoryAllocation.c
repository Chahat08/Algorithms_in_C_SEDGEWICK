/*This is the Sieve of Eratosthenes program with N input as a command
line argument instead of a #define statement. 
The array memory is dynamically allocated in this program.
The program finds prime numbers lesser than N.*/

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	long int i, j, N = atoi(argv[1]) + 1;
	int* a = malloc(N * sizeof(int));
	if (a == NULL) {
		printf("Insufficient memory"); return;
	}

	for (i = 2; i < N+1; ++i) a[i] = 1;

	for (i = 2; i < N+1; ++i)
		if (a[i])
			for (j = i; j <= N / i; ++j)
				a[i * j] = 0;

	for (i = 2; i < N; ++i)
		if (a[i]) printf("%5d\t", i);

	return 0;
}