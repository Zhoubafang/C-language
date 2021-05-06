#include <stdio.h>
int fun(int num)
{
	int flag = 1;
	int i;
	for (i = 2; i <= num - 1; i++)
		if (num % i == 0) flag = 0;
	return flag;
}
int main(void)
{
	int n;
	for (n = 100; n <= 200; n++)
	{
		if (fun(n) == 1) printf("%d\n", n);
	}
	return 0;
}