#include<stdio.h>

//Write a program of structure employee that provides the following information -print and display empno, empname, address and age
struct empdata{
	
	int empno,empage;
	char empname[10],empads[10];
}emp;

main(){
	
	printf("enter emp no. : ");
	scanf("%d",&emp.empno);
	printf("\nenter emp Name : ");
	scanf("%s",&emp.empname);
	printf("\nenter emp address : ");
	scanf("%s",&emp.empads);
	printf("\nenter emp age : ");
	scanf("%d",&emp.empage);
	
	printf("\n emp no. : %d",emp.empno);
	printf("\n emp name : %s",emp.empname);
	printf("\n empn address : %s",emp.empads);
	printf("\n emp age : %d",emp.empage);
}
