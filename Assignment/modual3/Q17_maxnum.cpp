#include<stdio.h>
main(){
	
	//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6
	

	int arr[5]={12,45,56,55,3};
	int max=arr[0],i;
	
	
	for(i=1;i<=5;i++){
		
		if(max<arr[i]){
			max = arr[i];
		}
	}
	printf("max value is : %d ",max);
}
