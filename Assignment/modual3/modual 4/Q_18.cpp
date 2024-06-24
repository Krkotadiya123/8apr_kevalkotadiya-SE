//wap to create a file and write contents, save and close the file.
#include<iostream>
#include<fstream>
using namespace std;
main()
{
		
		ofstream myfile("example.txt");
	string id;
	string nm;
		cout<<"enter id:";
		cin>>id;
		myfile<<"\n id:"<<id;
		
		
		cout<<"enter nm:";
		cin>>nm;
		myfile<<"\n name:"<<nm;
		
		myfile<<"\n";

	

	
	myfile.close();	
}
