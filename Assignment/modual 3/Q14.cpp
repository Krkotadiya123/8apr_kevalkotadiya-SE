//Q.14 WAP to print Fibonacci series up to given numbers//
 #include<stdio.h>
 main()
 {
 	int i,a=0,b=1,c;
 	printf("enter value i:");
 	scanf("%d",&i);
 	for(c=0;c<=i;c=a+b)
 	{
 		printf("%d ",c);
 		a=b;
 		b=c;
	 }
 	
 }
