//Q7.WAP to swap two numbers without using third variable//
#include<stdio.h>
main()
{
	int x=10,y=20;
	x=x-y;
	y=x+y;
	x=y-x;
	printf("%d %d",x,y);
	
}
