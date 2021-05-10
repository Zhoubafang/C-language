#include <stdio.h>

int main(void)
{
	int currentspeed, limitspeed;
	scanf("%d %d",&currentspeed,&limitspeed);
	
	if (currentspeed >limitspeed * 1.5)
	{
		printf("License Revoked") ;
		
	}else if(currentspeed > limitspeed * 1.5)
	 {
	 	printf("Exceed 10%; Fine 200; Points 3! \n");
	 	
	 }else 
	 {
	 	printf("OK ! \n");
	 }
	return 0;	
}


 
