#include<iostream>
using namespace std;
class account
{
	public:
		
		
	int acnum;
	char actype,hname,ch;
	void a_getdata(){
	cout<<"enter acount number:";
	cin>>acnum;
	cout<<"enter acount type:";
	cin>>actype;
	cout<<"enter acount holder name:";
	cin>>hname;
	}
	
	
};
class deposit:public acount
{


	public:
		int depo;
		void d_getdata(){
			cout<<"enter your minimum amount";
			cin>>depo;
			if(==0){
				cout<<"entet amount";
				
			}
			else {
				cout<<"enter amount up 2000";
			}
			
		}
};
class withdwal:public deposite
{
	public:
		int with;
		void w_getdata()
		{
			cout<<"entet your withdwal amount:";
			cin>>with;
			if(with=depo)
			
		}
};
class statemetn:public withdrwal
{
	public:
		void printdata(){
			cout<<"acount  anum:"<<anum;
			coun<<"acount type"<<atype;
			cout<<"acount hname"<<hname;
			cout<<"blance"<<depo-wamount;
		}
};
main()
{
	statement st;
	st.
}
