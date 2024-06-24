//Write a program to find the max number from given two numbers using
//friend function 
#include<iostream>
using namespace std;
class master
{
	private:
		int a,b;
		
		public:
			master()
			{
			int a,b;
			
				
			}
			friend void getdata(master &ms)
			{
				
			cout<<"enter number a:";
			cin>>ms.a;
			cout<<"enter number b:";
			cin>>ms.b;
		if(ms.a>ms.b){
			cout<<"max number is :"<<ms.a;
			
		}
		else{
			cout<<"max number is :"<<ms.b;
		}
			}
			
};
main()
{
	master m;
	getdata(m);
}


