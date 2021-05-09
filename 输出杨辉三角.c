#include <stdio.h>

int main(void)
{
	int a[6][6], i, j, k;
	for (i = 0; i < 6; i++)
	{
		a[i][0] = 1; a[i][i] = 1;
	}
	for (i = 2; i < 6; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	return 0;
}
