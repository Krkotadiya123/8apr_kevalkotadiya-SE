#include<iostream>
using namespace std;
main()
{
	int s1,s2,s3,s4,total;
	float pr;
 	cout<<"enter marks s1:";
	cin>>s1;
	cout<<"enter mark s2:";
	cin>>s2;
	cout<<"enter marks s3:";
	cin>>s3;
	cout<<"enter marks s4:";
	cin>>s4;
	
		total=s1+s2+s3+s4;
	cout<<"\n total"<<total;
		pr=total/4;
		cout<<"\npr"<<pr;
		if(pr>=70)
	{
		cout<<"\nresult A+";
	}
	else if(pr>=65)
	{
		cout<<"\nresult A";
			
	}
	else if(pr>=50){
		cout<<"\nresult B";
	}
	else if(pr>40){
	cout<<"\nresult c";
	}
	

	else{
		cout<<"\n fall";	
	}	
}
