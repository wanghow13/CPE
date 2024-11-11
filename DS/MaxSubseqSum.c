#include <stdio.h>
int MaxSubseqSum2( int A[], int N );
int main() {
	int a[] = {1, 2, 3, 4, -1};
	printf("%d", MaxSubseqSum2(a, 5));

}

int MaxSubseqSum2( int A[], int N )
{
	int ThisSum, MaxSum = 0;
	int i, j;
	for ( i = 0; i < N; i++ )
	{
		ThisSum = 0;
		for ( j = i; j < N; j++ )
		{
			ThisSum += A[j];
			if ( ThisSum > MaxSum )
				MaxSum = ThisSum;
		}
	}

	return MaxSum;

}