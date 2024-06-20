//wap to read name and mark of n number of student and store them a file
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream student2("schooldata.txt");
	ofstream student3("student3.txt");
	
	int n,count=0;
	string posts;
	
	cout<<"enter number of student";
	cin>>n;
	
	while(getline(student2,posts)&& count<n*2){

	student3<<posts<<"\n";
	count++;
}
cout<<n<<"student data have been writen to student.txt"<<"\n";
	
}
