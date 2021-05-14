#include<stdio.h>

int main(void)
{
	double average;
	double sum = 0;
	int count = 0;
	double score = 0;
	
	while(count<5)
	{
		scanf("%lf",&score);
		sum += score;
		count++;
	}
	
	printf("%lf",sum);
	
	
	return 0;
}
