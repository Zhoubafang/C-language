#include<stdio.h>

int main(void)
{
     int number;
     int count;
     
     int unit ;
     int ten;
     int hundred;
     
     for(number=100;number <=999;number++)
     {
     	unit = number % 10;
     	ten = number / 10 % 10;
     	hundred = number / 100;
     	
     	if(unit != ten && unit != hundred && ten !=hundred)
     	{
     		count++;
		}
	 }
	 printf("count = %d");
	return 0;
 } 
