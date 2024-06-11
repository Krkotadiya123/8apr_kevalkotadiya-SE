/*Q13.WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746*/
#include<stdio.h>
#include<string.h>
main()
{
	char num[10];
	printf("orignal num:");
	scanf("%s",&num);
	printf("\nrevese_num:%s",strrev(num));	
}
