 //Q.21 WAP of Addition, Subtraction, Multiplication and Division using Switch
//case.(Must Be Menu Driven)division
#include<stdio.h>
main()
{
	int a,b;
	int op;
	printf("enter value a:");
	scanf("%d",&a);
	printf("enter value b:");
	scanf("%d",&b);
//	printf("enter namber ");
//	scanf("%d",&op);
	printf("\n 1.addition");
	printf("\n2.subtraction");
	printf("\n 3.multiplication");
	printf("\n 4.division");
	printf("\n enter namber ");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			printf("\n%d",a+b);
			break;
			
		case 2:
		printf("\n%d",a-b);
			break;
		
		case 3:
					
		printf("\n%d",a*b);
		break;
					
		case 4:
		printf("\n%d",a/b);
		break;
	}
	
}
