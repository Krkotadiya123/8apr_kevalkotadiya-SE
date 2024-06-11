// WAP to find reverse of string using recursion 
#include<stdio.h>

void reverse(char s[],int i)
{
	if(s[i]=='\0')
		return;
	reverse(s,i+1);
	printf("%c",s[i]);
}

int main()
{
	char str[100];
	printf("enter string:");
	gets(str);
	printf("string reverees is:");
	reverse(str,0);
	
	
}


