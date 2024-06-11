//Q5.WAP to check if the given year is a leap year or not.
#include<stdio.h>
main()
{
	int year;
	printf("enter namber year:");
	scanf("%d",& year);
	if(year%4==0)
	{
		printf("this is leap year!");
		
	}
	else
	{
		printf("this is not leap year!");
	}
	
}
