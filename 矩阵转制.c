#include <stdio.h>
int main(void)
{
	int a[3][3], i, j, t;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	printf("ԭ����Ϊ:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
		for (j = 0; j < i; j++)
		{
			t = a[i][j]; a[i][j] = a[j][i]; a[j][i] = t;
		}
	printf("ת�ú�ľ���Ϊ:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%4d", a[i][j]);
		printf("\n");
	}
}