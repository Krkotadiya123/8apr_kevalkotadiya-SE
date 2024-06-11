
#include <stdio.h>
#include <string.h>
void reverseString(char a[]);
void concatenateStrings(char a[], char b[]);
void checkPalindrome(char a[]);
void copyString(char std1[], char src2[]);
int stringLength(char str[]);
void frequencyOfCharacters(char a[]);
void VowelsAndConsonants(char a[]);
void DigitsAndSpaces(char a[]);

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
    printf("\nSelect any option (1-8): ");
    scanf("%d", &ch);
    
    printf("Enter string: ");
    scanf("%s", a);
    
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
            checkPalindrome(a);
            break;
        case 4:
            copyString(b, a);
            printf("Original: %s\nCopied: %s\n", a, b);
            break;
        case 5:
            printf("Length: %d\n", stringLength(a));
            break;
        case 6:
            frequencyOfCharacters(a);
            break;
        case 7:
            VowelsAndConsonants(a);
            break;
        case 8:
            DigitsAndSpaces(a);
            break;
        
    }
    
    
}

}

void reverseString(char a[]) {
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
    strcat(a, b);
    printf("Concatenation: %s\n", a);
}

void checkPalindrome(char a[]) {
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
    strcpy(src1, src2);
}

int stringLength(char a[]) {
    return strlen(a);
}

void frequencyOfCharacters(char a[]) {

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

void VowelsAndConsonants(char a[]) 
{
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
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
}

void DigitsAndSpaces(char a[]) {
    int digit,i; 
	int space= 0;

	 printf("Enter a name: ");

  for (int i = 0; a[i] != NULL; ++i) {
    if (a[i] >= '0' && a[i] <= '9') 
      ++digit;
    
   else if 	(a[i] == ' ')
     ++space;
    
  }

 
  printf("\nDigits: %d", digit);
  printf("\nspaces: %d", space);
  printf("\n");


}







