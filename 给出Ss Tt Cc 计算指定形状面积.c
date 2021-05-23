#include<stdio.h>
#define PI 3.14
int main(void)
{
	char data;
	double length;
	double base;
	double height;
	double radius;
	data = getchar();
	switch(data)
	{
		case 'S':
		case 's':
			scanf("%lf",&length);
			printf("area=%lf",length * length);
			break;
		case 'T':
		case 't':
			scanf("%lf %lf",&base,&height);
			printf("area = %lf",base * height/2);
			break;
		case 'C':
		case 'c':
			scanf("%lf",&radius);
			printf("area = %lf",PI * radius * radius);
			break;
			
	}
	
	return 0;
 } 
