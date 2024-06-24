//Define a class to represent a bank account. Include the following members:
//1. Data Member:
//-Name of the depositor
//-Account Number
//-Type of Account
//-Balance amount in the account 
//2. Member Functions
//-To assign values
//-To deposited an amount
//-To withdraw an amount after checking balance
//-To display name and balance 
#include<iostream>
using namespace std;
class account
{
	public:
		
		
	int anum;
	string atype,hname;
	void a_getdata(){
	cout<<"enter acount number:";
	cin>>anum;
	cout<<"enter acount type:";
	cin>>atype;
	cout<<"enter acount holder name:";
	cin>>hname;
	}
	
	
};
class deposit:public account{


	public:
		int depo;
		void d_getdata(){
			cout<<"enter your minimum amount";
			cin>>depo;
			if(depo<2000){
				cout<<"entet deposit ";
				cin>>depo;
				
			}
			
			
		}
};
class withdwal:public deposit
{
	public:
		int with;
		void w_getdata()
		{
			cout<<"entet your withdwal amount:";
			cin>>with;
			if(depo<with){
				cout<<"enter your number:";
				cin>>with;
			
			}
			depo-=with;
		}
};
class statemetn:public withdwal
{
	public:
		void printdata(){
			cout<<"\nacount  anum:"<<anum;
			cout<<"\nacount type"<<atype;
			cout<<"\nacount hname"<<hname;
			cout<<"\nblance"<<depo;
		}
};
main()
{
	statemetn st;
	st.a_getdata();
	st.d_getdata();
	st.w_getdata();
	st.printdata();
	
}

