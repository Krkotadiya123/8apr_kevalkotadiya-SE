//Q3. WAP to find area of circle, rectangle and triangle//
#include<stdio.h>
main()

{

	//are of  triangle//
	int height,base;
	float area;
	printf ("Enter triangle height=");
	scanf("%d",&height);
	printf("Enter triangle base=");
	scanf("%d",&base);
	area=0.5*height*base;
	printf("\narea of triangle:%f",area);
}
