#include <stdio.h>
#include <string.h>

void reverseString(char a[]) {
	//reverse string
    int n,i; 
    char temp;
	n= strlen(a);
    for (i = 0; i < n / 2; i++) {
         temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("Reversed: %s\n", a);
}

void concatenateStrings(char a[], char b[]) {
//concatenate string
    strcat(a, b);
    printf("Concatenation: %s\n", a);
}

void Palindrome(char a[]) {
	//palindrom
	int l,i;
   	l=strlen(a);
			for(i=0;i<l;i++){
				if(a[i]!=a[l-i-1]){
					printf("\n not palindrome");
				}
				else {
					printf("\n palindrome");
				}
				break;
			}
    }
   
   


void copyString(char src1[], char src2[]) {
	//copystring
    strcpy(src1, src2);
}

int stringLength(char a[]) {
	//length string
	    return strlen(a);
}

void frequencyOfCharacters(char a[]) {
	//frequency of characters

    int count,k,i;
   for(k='a';k<='z';k++){
				count=0;
			
				for(i=0;a[i]!=NULL;i++){
					if(k==a[i])
						count++;
						
					}
					if(count>0)
						printf("%c frequency of character%d\n",k,count);
					}
				}

void vowels and consonants(char a[]) 
{
	//vowels and consonants
	int i;
    int vowels = 0, consonants = 0;
    		for(i=0;a[i]!='\0';i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
            vowels++;
        }else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
		{
            consonants++;
        }
    	}
    printf("vowels: %d\nconsonants: %d\n", vowels, consonants);
}

void digit and space(char a[]) {
	//digit and space
    int digit,i; 
	int space= 0;

	 printf("Enter a name: ");

  for (int i = 0; a[i] != NULL;   i++)
  {
    if (a[i] >= '0'&& a[i] <= '9')
      digit++;
    
   	else if (a[i] == ' ')
   	
    space++;
    
  }
  
  printf("\ndigits: %d", digit);
  printf("\nspaces: %d", space);
  printf("\n");


}

main() {
    int ch,i;
    char a[30], b[30],space=0,digit;
    
	for(i=0;i<=5;i++)
	{
	
    printf("Main menu:\n");
    printf("\n1. Reverse");
    printf("\n2. Concatenation");
    printf("\n3. Palindrome");
    printf("\n4. Copy");
    printf("\n5. Length of string");
    printf("\n6. Frequency of characters in a string");
    printf("\n7. Find number of vowels and consonants");
    printf("\n8. Find number of blank spaces and digits");
     printf("\nenter string:");
    gets(a);
    printf("\nSelect any option (1-8): ");
    scanf("%d", &ch);
    
   
    
    switch(ch) {
        case 1:
            reverseString(a);
            break;
        case 2:
            printf("Enter second string: ");
            scanf("%s", b);
            concatenateStrings(a, b);
            break;
        case 3:
            Palindrome(a);
            break;
        case 4:
            copyString(b, a);
            printf("Original: %s\ncopy: %s\n", a, b);
            break;
        case 5:
            printf("Length: %d\n", stringLength(a));
            break;
        case 6:
            frequencyOfCharacters(a);
            break;
        case 7:
           vowels and consonants (a);
            break;
        case 8:
           digit and space(a);
            break;
             default:
               
	    printf("invalid optoion\n");
        
    }  
	 printf("do you want to continue? (9): ");
        scanf(" %d", &a);
}
}











