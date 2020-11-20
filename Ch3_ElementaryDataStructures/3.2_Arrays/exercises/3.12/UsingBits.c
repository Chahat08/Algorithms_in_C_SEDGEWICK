// For more information on bit arrays: http://www.mathcs.emory.edu/~cheung/Courses/255/Syllabus/1-C-intro/bit-array.html

#include <stdio.h>
#include <stdlib.h>

void SetBit(int a[], int k)
{
	a[k / 32] |= 1 << (k % 32);
}
void ClearBit(int a[], int k)
{
	a[k / 32] &= ~(1 << (k % 32));
}
int TestBit(int a[], int k)
{
	if ((a[k / 32] & (1 << (k % 32))) != 0)
		return 1;
	else return 0;
}

int main(int argc, char* argv[])
{
	int i, j, k, N = atoi(argv[1]), n = (N % 32 ? N / 32 + 1 : N / 32);
	int* a = malloc(n * sizeof(int));

	for (i = 2; i < N; ++i) SetBit(a, i);

	for (i = 2; i < N; ++i)
		if (TestBit(a, i))
			for (j = i; j <= N / i; ++j) ClearBit(a, i * j);

	for (i = 2; i < N; ++i)
		if (TestBit(a, i)) printf("%d\n", i);

	printf("EFFECT ON SPACE USED:\n");
	printf("Size of an int = %d bytes = %d bits.\n", sizeof(int), 8 * sizeof(int));
	printf("Therefore, a bit array only occupies %.3f times the sizeof an integer array.\n", 1.0 / (8 * sizeof(int)));
	printf("EFFECT ON TIME TAKEN:\n");
	printf("The time taken may slightly increase in case of bit arrays to make up for the time taken to push and pop the functions used from the stack frame.\n");
	printf("But, in any case the increase in time wouldn't be very significant, especially in the face of massive gains in terms of memory used.\n");

	return 0;
}