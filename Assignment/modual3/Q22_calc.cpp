#include<stdio.h>
main(){
	//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
	int a,b,choice;
	printf("enter number 1 : ");
	scanf("%d",&a);
	printf("enter number 2 : ");
	scanf("%d",&b);
	
	
	printf("choich:\n");
	printf("1 .addition\n");
	printf("2. substraction \n");
	printf("3. multiplication\n");
	printf("4. division \n");
	
	printf("enter oprator to make optration : ");
	scanf(" %d",&choice);
	
	switch(choice)
	{
		case 1:
		printf("\n sum %d",a+b);
		break;
		
		case 2:
		printf("\n sub %d",a-b);
		break;
		
		case 3:
		printf("\n mul %d",a*b);
		break;
		
		case 4:
		printf("\n div %d",a/b);
		break;
		
		default :
		printf("\n error ");
		break;
	}
	
	
}
