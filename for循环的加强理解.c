#include <stdio.h>

int main(void)
{
	for(i=1;i<=n;i++)	//(n+1)
		for(j=1;j<=n;j++)	//(n * (n+1))
			{
				c[i][j] = 0;	//(n*n)
				for(k=1;k<=n;k++)	//(n*n*(n+1))
					c[i][j] = c[i][j] + a[i][k] * b[k][j];	//n*n*n
			}
	retrun 0;
 } 
