#define N 1000
#include <stdio.h>

int main()
{
	int a[N] = {0}, cnt = 0, i;

	while (scanf("%d", &i) == 1)
		if (i >= 0 && i < 1000) 
			if (!a[i]) {
				++cnt; a[i] = 1;
			}

	printf("Number of unique integers lesser than 1000 encountered: %d\n", cnt);

	return 0;
}