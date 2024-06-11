//Q 20.Write a program to find out the max number from given array using function 

#include<stdio.h>
main()
{
	int a[7]={2,5,7,13,15,16,8};
	int max,i;
	for(i=0;i<=7;i++)
	{
		if(max<a[i])
		{
		max = a[i];}
	
	}
	printf("\narray elements:");
	for(i=0;i<7;i++)
	{
		printf("\n%d",a[i]);
	}

	printf("\nn the max value of array is :%d",max);
	
}
