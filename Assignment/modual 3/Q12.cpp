//Q12.WAP to take 10 no. Input from user and find out … //
//
#include<stdio.h>
main()
{
	int id[10],i;
	int oddsum,evensum;
	printf("\nenter 10 namber");	
	for(i=0;i<10;i++)
	{
		printf("\nenter namber:",i);
		scanf("\n%d",& id[i]);
		printf("%d",id[i]);
		
	}
	for( i=0;i<=10;i++)
	{
		if(id[i]%2==0)
		{
			printf("\nodd_namber:%d",id[i]);
			oddsum += id[i];
				
		}
	}
		for( i=0;i<=10;i++)
	{
		if(id[i]%2==0)
		{
			printf("\nevennamber:%d",id[i]);
			evensum += id[i];
				
		}
	 
	}
	 printf("\noddsum:%d",oddsum);
	 printf("\nevensum:%d",evensum);
}
