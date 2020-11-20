#define N 1000
#define n 50
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[N] = { 0 }, cnt, i, j, avg_cnt = 0;

	for (j = 0; j < n; ++j)
	{
		cnt = 0;
		while (1)
		{
			i = rand() % 1000;
			if (!a[i]) {
				++cnt; a[i] = 1;
			}
			else break;
		}
		for (i = 0; i < N; ++i) a[i] = 0;
		avg_cnt += cnt;
	}

	printf("Average number of unique integers generated before repitions: %d\n", avg_cnt / n);

	return 0;
}