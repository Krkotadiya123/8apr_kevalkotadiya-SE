// Write a program to calculate the area of circle, rectangle and triangle using
//Function Overloading
// Rectangle: Area * breadth
// Triangle: ½ *Area* breadth
// Circle: Pi * Area *Area
#include<iostream>
using namespace std;
class area{
	public:
		void calaculatearea(int l,int b){
		
		cout<<"area rectangle:"<<l*b<<"\n";
	}
			void calaculatearea(int base,int hight){
		
		cout<<"area triangle:"<<((base*hight)/2)<<"\n";
	}
	void calaculatearea(float area){
		cout<<"area cricle"<<3.14*area*area<<"\n";
	}
	
};
main(){
	area ae;
	ae.calaculatearea(8,12);
	ae.calaculatearea(12,5);
	ae.calaculatearea(8);
}
