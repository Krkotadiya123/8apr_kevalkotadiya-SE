

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
	printf("array elements:")
	for(i=0;i<7;i++)
	{
		printf("%d",a[i]);
	}

	printf(" the ax value of array is :%d",max);
	
}
