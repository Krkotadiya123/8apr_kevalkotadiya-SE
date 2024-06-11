//Q18.Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include<stdio.h>
main()
{
	int num[5],i,a,sum=0;
	printf("enter value namber a:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		printf("enter namber:");
		scanf("%d",&num[i]);
		sum+=num[i];
		//printf("summation namber:%d",&sum);
	}
		printf("summation namber:%d",sum);
}

