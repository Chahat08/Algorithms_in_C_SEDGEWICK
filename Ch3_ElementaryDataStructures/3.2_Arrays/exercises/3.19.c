#define N 1000
#define n 50
#include <stdio.h>
#include <stdlib.h>

int randNum() { return rand() % 1000; }

int main()
{
	int i, j, k;
	int a[N] = { 0 }, cnt, avg_cnt = 0;

	for (j = 0; j < n; ++j)
	{
		cnt = 0;
		while (1)
		{
			i = randNum();
			a[i] = 1;
			for (k = 0; k < N; ++k)
				if (!a[k]) break;
			if (k == N) break;
			++cnt;
		}

		for (i = 0; i < N; ++i) a[i] = 0;
		avg_cnt += cnt;
	}
	printf("Average number of integers generated over 50 runs: %d", avg_cnt);
	return 0;
}