#include<iostream>
using namespace std;
class st
{
	public:
		int s1,s2,s3,s4;
		int total;
		int pr;
		void mark(){
			cout<<"enter s1:";
			cin>>s1;
			cout<<"enter s2:";
			cin>>s2;
			cout<<"enter s3:";
			cin>>s3;
			cout<<"enter s4:";
			cin>>s4;
			
			
		}
};
class result:public st
{
	public:
	void printmark(){
		total=s1+s2+s3+s4;
		cout<<"\ntotal marks:"<<total;
	
		
		
		
		
		
	}
};
main(){
	result rs;
	rs.mark();
	rs.printmark();
}
