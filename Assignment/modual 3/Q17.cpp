//Q.17Write a program to find out the max from given number

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

	printf(" max value:%d",max);
	
}
