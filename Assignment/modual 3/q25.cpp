//WAP to take two Array input from user and sort them in ascending or
//descending order as per user’s choice
#include<stdio.h>
main()
{
	int a,j,i,ch;
	int nm[5];
	printf("\nenter namber:");

	
	for(i=0;i<5;i++){
		scanf("%d",&nm[i]);
		
	}
	printf("\n1.ascending");	
	printf("\n2.descending");
	
	printf("enter ch:");
	scanf("%d",&ch);
		switch(ch){
			case 1:
			for(i=0;i<5;i++)
			{
				for(j=i+1;j<5;j++)
				{
					if(nm[i]>nm[j])
					{
						a=nm[i];
						nm[i]=nm[j];
						nm[j]=a;
					}
				}
			}
			break;
				case 2:
						for(i=0;i<5;i++)
						{
				for(j=i+1;j<5;j++)
				{
					if(nm[i]<nm[j])
					{
						a=nm[i];
						nm[i]=nm[j];
						nm[j]=a;
					}
				}
			}
			break;
		
	}
	for(i=0;i<5;i++){
		printf("%d ",nm[i]);
	}
 } 

