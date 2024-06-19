// Write a program to swap the two numbers using friend function without
using third variable 
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
			cout<<"ennter number b:";
			cin>>ms.b;
			ms.a=ms.a+ms.b;
			ms.b=ms.a-ms.b;
			ms.a=ms.a-ms.b;
			cout<<"\n aftre swapping:"<<ms.a<<"  "<<ms.b;
			}
};
main()
{
	master m;
	getdata(m);
}


