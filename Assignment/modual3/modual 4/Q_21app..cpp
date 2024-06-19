//wap to append contant toa file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream myfile("example.txt",ios::app);
	int id;
	string b;
	cout<<"enter name id:";
	cin>>id;
	myfile<<"id:"<<id;
	cout<<"enter name b:";
	cin>>b;
	myfile<<"name:"<<b;
	
	
}
