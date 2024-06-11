//Q29.Write a program of structure employee that provides the following information -print and display empno, empname, address and age
#include<stdio.h>


struct empdata{
	
	int empno,age;
	char name[10],empadd[10];
}emp;

main(){
	
	printf("enter emp no. : ");
	scanf("%d",&emp.empno);
	printf("\nenter emp Name : ");
	scanf("%s",&emp.name);
	printf("\nenter emp address : ");
	scanf("%s",&emp.empadd);
	printf("\nenter emp age : ");
	scanf("%d",&emp.age);
	
	printf("\n emp no. : %d",emp.empno);
	printf("\n emp name : %s",emp.name);
	printf("\n empn address : %s",emp.empadd);
	printf("\n emp age : %d",emp.age);
}
