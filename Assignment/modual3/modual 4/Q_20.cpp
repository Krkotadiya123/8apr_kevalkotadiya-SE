//wap to read numbers from a file and write evevn,odd to separate file. 
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream myfile(".txt");
	int n,even,odd,i,nm;
	cout<<"enter number:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nenter number:";
		cin>>nm;
		
		if(nm%2==0){
			cout<<"\nodd number:";
			
		}
		else{
			cout<<"\neven number:";
		}
		
	}
	
	
}
