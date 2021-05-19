#include<stdio.h>

int main(void)
{
	int columns;
	int rows;
	for(rows=1;rows<=9;rows++)
	{
		for(columns=1;columns<=rows;columns++)
		{
			printf("%d*%d=%d ",rows,columns,rows * columns  );
		}
		printf("\n");
	}
	return 0;
}
