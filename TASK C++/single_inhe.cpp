#include<iostream>
using namespace std;
class studinfo
{
	public:
		int id;
		string name;
		void getdata()
		{
			cout<<"enter ID:";
			cin>>id;
			cout<<"enter Name:";
			cin>>name;
			
		}
};
class result:public studinfo
{
	public:
		void printdata(){
		
	cout<<"\nID 1:"<<id;
	cout<<"\nNAME:"<<name;
	
}
};
main()
{
	result rs;
	rs.getdata();
	rs.printdata();
}
