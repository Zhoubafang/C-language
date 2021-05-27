#include<stdio.h>

int main(void)
{
	double average;
	double sum = 0;
	double  score;
	int classno,studentnum;
	
	for(classno=0;classno<=2;classno++)
	{
			sum = 0;
			
			for(studentnum=0;studentnum<=3;studentnum++)
			{
				scanf("%lf",&score);
				sum += score;
			}
			average = sum / 4;
			printf("%lf",average);
			 
	}
	return 0;	
} 
