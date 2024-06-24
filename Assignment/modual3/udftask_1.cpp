#include<stdio.h>
void circle(){
	
	const float pi = 3.14;
	int r;
	printf("Enter Radius : ");
	scanf("%d",&r);
	printf("Area Of Circle is %f",pi*r*r);
}

void square(){
	
	int side;
 	printf("Enter side :");
 	scanf("%d",&side);
 	printf("Area of square :%d",side*side);
}

void rectangle(){
	
	int length,width;
	printf("enter length : ");
	scanf("%d",&length);
	printf("enter width : ");
	scanf("%d",&width);
	printf("area of rectangle is %d",length*width);
}
main(){
	
	int choice;
	printf("enter choice :");
	scanf("%d",&choice);
	
	switch(choice){
		
		case 1 :
		circle();
		break;
		
		case 2 :
		square();
		break;
		
		case 3 : 
		rectangle();
		break;
		
		default :
		printf("please enter valid choice !");
		break;
			
	}
	
	
}
