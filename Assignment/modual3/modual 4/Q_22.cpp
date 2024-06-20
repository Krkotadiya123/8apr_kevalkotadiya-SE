#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream myfile("student1.txt");
	ifstream myfile1("student2.txt");
	
	string line1,line2;
	
	while(getline(myfile,line1)&& getline(myfile1,line2)){
		if(line1!=line2){
			cout<<"files is different"<<"\n";
		}
		else{
			cout<<"file is same"<<"\n";
		}
	}
	
	
}
