//WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>
#include<string.h>
main(){
	char str[50],a[20];
	int r;
	printf("\nenter the string  :");
	scanf("%s",&str);
	printf("\nenter the string a:");
	scanf("%s",&a);

	r=strcmp(str,a);
	if(r==0){
	
		printf("string is palindrome!");
	}
	else{
		printf("string is not palindrome!");
	}

} 
