#include<stdio.h>
void getsum(int a , int b ){
	
	printf("sum : %d ",a+b);
	
}

void getsub(int a,int b ){
	
	printf("sub : %d ",a-b);
	
}

void getmul(int a , int b){
	
	printf("mul : %d ",a*b);
	
}
main(){
	
//	getsum(12,45);
	int n1 ,n2;
	printf("enter number 1 : ");
	scanf("%d",&n1);
	printf("Enter number 2 : ");
	scanf("%d",&n2);
	getsum(n1,n2);
	getsub(n1,n2);
	getmul(n1,n2);
}
