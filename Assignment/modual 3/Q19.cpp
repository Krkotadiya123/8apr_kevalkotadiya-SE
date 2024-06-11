//Q19. Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)// 
#include<stdio.h>
#include<math.h>
main()
{
	int num,fdigit,ldigit,sum=0;
	printf("enter num:");
	scanf("%d",&num);
	ldigit=num%10;
	while(num>=9)
	{
		num=num/10;
	}
	fdigit=num;


	printf("sum  of %d  + %d=%d",fdigit,ldigit,fdigit+ldigit);
}

    

