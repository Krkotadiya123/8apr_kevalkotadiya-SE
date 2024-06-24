//Write a program to find the multiplication values and the cubic values usinginline function 
#include<iostream>
using namespace std;

inline multiplication(int a,int b)
{
	return a*b;
}
	
	inline cube(int c){
	
	return c*c*c;
}

main(){
	int x,y,result,cubic;
	cout<<"enter number of x:";
	cin>>x;
	cout<<"enter number of y:";
	cin>>y;
	
	
	result=multiplication(x,y);
	cout<<"multiplication value:"<<result<<"\n";
	
	cubic=cube(result);
	cout<<"cubic value of:"<<cubic<<"\n";
}
