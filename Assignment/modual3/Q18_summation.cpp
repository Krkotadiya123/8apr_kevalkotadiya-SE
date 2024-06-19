#include<stdio.h>
main(){
	
	//Write a program make a summation of given number (E.g., 1523 Ans: -11)

	int num[5]={1,2,3,4,5},i,sum=0;
	
	
	for(i=0;i<5;i++){
		
		
		sum+=num[i];
	}
	
	printf("Sum of the array = %d\n",sum);
          
}
