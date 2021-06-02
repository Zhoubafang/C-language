#include<stdio.h>

int main(void)
{
	int i,j;
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7-i;j++) printf(" ");
		for(j=1;j<=2*i-1;j++) printf("*");   for循环2,3为并列地位
		printf("\n");
	}
	return 0;
}
