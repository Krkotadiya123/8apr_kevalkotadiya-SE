//Q.18Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
 main()
 {
 	int n,i,sum=0;
 	printf("enter digit value:");
 		scanf("%d",&n);

 	for(i=0;i<5;i++){
 	
	 
 		sum+=n%10;
 		n/=10;
	 }
	 printf("sum of digit = %d",sum);
 }
