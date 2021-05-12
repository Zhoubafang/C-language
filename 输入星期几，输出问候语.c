#include<stdio.h>

int main(void)
{
	int day;
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日愉快");break; 
		case 6:
		case 7:
			printf("周末愉快");break;
		default:
			printf("请输入1-7之间的数字");break;
			 
			
	}
	
	return 0;
}
