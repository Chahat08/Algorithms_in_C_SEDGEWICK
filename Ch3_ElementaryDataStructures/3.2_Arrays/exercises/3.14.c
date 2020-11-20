#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main()
{
	int i, j, cnt = 0;
	int a[N];

	for (i = 2; i < N; ++i) a[i] = 1;

	for (i = 2; i < N; ++i)
		if (a[i])
			for (j = i; j*i < N; ++j) a[i * j] = 0;

	for (i = 2; i < N; ++i)
	{
		printf("%3d ", i);
		if (a[i]) ++cnt;
		for (j = 0; j < cnt; j+=5)
			printf("*");
		printf("\n");
	}

	return 0;
}