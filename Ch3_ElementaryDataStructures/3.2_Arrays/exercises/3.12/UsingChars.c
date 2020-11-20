#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	int i, j, k, N = atoi(argv[1]);
	char* a = malloc(N * sizeof(char));
	
	for (i = 2; i < N; ++i) a[i] = '1';

	for (i = 2; i < N; ++i)
		for (j = i; j < N / i; j++)
			if (a[i] == '1')
				a[i * j] = '0';
	
	for (i = 2; i < N; ++i)
		if (a[i] == '1') printf("%d\n", i);

	printf("EFFECT ON SPACE USED:\n");
	printf("Size of int = %d, Size of char = %d\n", sizeof(int), sizeof(char));
	printf("Therefore, size of int a[N] = %d, size of char a[N] = %d\n", N * sizeof(int), N * sizeof(char));
	printf("The char array is %.2f times smaller than the int array.\n\n", 1.0 * sizeof(char) / sizeof(int));
	printf("EFFECT ON TIME TAKEN:\n");
	printf("The time used must be more or less to that used in an int array because the program uses the operations take the same time.\n");

	return 0;
}