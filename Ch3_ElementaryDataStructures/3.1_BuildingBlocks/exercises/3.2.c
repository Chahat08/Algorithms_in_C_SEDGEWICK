#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int N, r, i, x;
	float m1 = 0.0, m2 = 0.0;

	for (r = 10; r <= 1000; r *= 10)
	{
		for (N = 1000; N <= 1000000; N *= 10)
		{
			printf("For r = %d, N = %d:\n", r, N);
			for (i = 0; i < N; ++i)
			{
				x = rand() % r;
				m1 += (float)x;
				m2 += (float)x *(float) x;
			}
			m1 /= (float)N;
			m2 = sqrt((m2 / (float)N) - (m1 * m1));
			printf("       Average = %f\n", m1);
			printf("Std. deviation = %f\n", m2);
			printf("\n");
		}
	}


}