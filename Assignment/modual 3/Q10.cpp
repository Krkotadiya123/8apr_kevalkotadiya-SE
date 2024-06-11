//Q.10 Vowel or Consonant using switch case //

#include <stdio.h>

main() 
 {
    char a;
    
    printf("Enter any alphabet: ");
    scanf("%c", &a);
   
    switch (a) {
        case 'a':
        
            printf("%c is  vowel.\n", a);
            break;
            case 'e':
           	 printf("%c is  vowel.\n", a);
            break;
            
            case 'i':
             printf("%c is vowel.\n", a);
             break;
             
            case 'o':
            	printf("%c is vowel.\n", a);
            	break;
            	
            case 'u':
            	printf("%c is vowel.\n", a);
            	 break;
            	 
        default:
            printf("%c is  consonant.\n", a);
    }
}
