#include<iostream>
using namespace std;
main()
{
	int id[5],i,n;
	cout<<"enter name of student:";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"enter your id:";
		cin>>id[i];
		
		}
		for(i=0;i<n;i++)
		{
			cout<<"\nID:["<<i<<"]<<"="<<id[i];
		}
}
