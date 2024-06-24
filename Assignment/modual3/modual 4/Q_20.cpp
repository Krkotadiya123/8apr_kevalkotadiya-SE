//wap to read numbers from a file and write evevn,odd to separate file. 
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream myfile("intcount.txt");
	ofstream evenfile("even.txt");
	ofstream oddfile("odd.txt");
	
	int n;
	
	while(myfile>>n){
	   
		
		if(n%2==0){
	  evenfile<<n<"\n";
			
		}
		else{
			oddfile<<n<<"\n";
		}
		
	}
	cout<<"even number"<<"\n";
	cout<<"oddnumber"<<"\n";
	
}
