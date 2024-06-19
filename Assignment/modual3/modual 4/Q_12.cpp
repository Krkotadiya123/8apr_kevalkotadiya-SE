//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include<iostream>
using namespace std;
class calc
{
	public:
		void getdata (int a,int b)
		{
		cout<<"enter number of a:";
		cin>>a;
		cout<<"enter number of b:";
		cin>>b;
		cout<<"\nadd:"<<a+b;
		cout<<"\nsub:"<<a-b;
		cout<<"\nmul:"<<a*b;
		cout<<"\ndiv:"<<a/b;
			
		}
		void getdata(float a,float b){
			cout<<"enter number of a:";
		cin>>a;
		cout<<"enter number of b:";
		cin>>b;
		cout<<"\nadd:"<<a+b;
		cout<<"\nsub:"<<a-b;
		cout<<"\nmul:"<<a*b;
			
		}
};

main()
{
calc c;
c.getdata(30,32);
c.getdata(30,32);
}


	




