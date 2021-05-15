#include <stdio.h>
void reverse(int p[], int n);
int main(void)
{
	int i, a[10], n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	reverse(a, n);
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}/*
void reverse(int p[], int n)
{
	int i, j, t;
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		t = p[i]; p[i] = p[j]; p[j] = t;
	}
} */
void reverse(int *p, int n)
{
	int *pj, t;
	for(pj = p+n-1;p<pj;p++,pj--)
	{
		t = *p; *p = *pj; *pj = t;
	}
}