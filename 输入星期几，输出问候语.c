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
			printf("���������");break; 
		case 6:
		case 7:
			printf("��ĩ���");break;
		default:
			printf("������1-7֮�������");break;
			 
			
	}
	
	return 0;
}
