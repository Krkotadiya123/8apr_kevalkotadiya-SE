//Q6.WAP to convert years into days and days into years//
#include<stdio.h>
main()
{
	int day,year;
	printf("enter day:");
	scanf("%d",&day);
	printf("%d",day/365);
	
	//days into years//
	printf("\nenter year");
	scanf("\n%d",&year);
	printf("\n%d",year*365);
}
