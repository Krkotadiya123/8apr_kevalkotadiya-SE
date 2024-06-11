#include<stdio.h>
main()
{
	int a;
	int namber;
	printf("enrte namber");
	scanf("%d",&a);
	
	printf("\n1:sun");
	printf("\n2mon");
	printf("\n3tue");
	printf("\n4 web");
	printf("\n4 thu");
	printf("\n6fri");
	printf("\n7 sau");
	printf("\nseclect any namber");
	scanf("%d",&namber);
	switch(namber)
	{
		 case 1:
      printf("Sunday");
      break;
		case 2:
      printf("Monday");
      break;
    case 3:
      printf("Tuesday");
      break;
    case 4:
      printf("Wednesday");
      break;
    case 5:
      printf("Thursday");
      break;
    case 6:
      printf("Friday");
      break;
    case 7:
      printf("Saturday");
      break;
	}
	
	
	
}
