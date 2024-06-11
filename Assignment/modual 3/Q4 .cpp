//Q4.WAP to find simple interest//
#include<stdio.h>
main()
{
	int principl,rate,time;
	int total;
	printf("enter principle amount:");
	scanf("%d",&principl);
	printf("enter rent amount:");
	scanf("%d",&rate);
	printf("enter time:");
	scanf("%d",&time);
	total=(principl*rate*time)/100;
	printf("%d",total);
	
}
