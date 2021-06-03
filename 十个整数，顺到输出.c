#include<stdio.h>

int main(void)
{
	int i,a[10];
	printf("please input 10 numbers: \n ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);		
	}
	for(i=0;i<=9;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}
