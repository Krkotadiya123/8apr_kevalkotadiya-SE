#include<iostream>
using namespace std;
class ashok
{
	
	int aid;
	string asub;
		public: 
	void a_getdata()
	{
		cout<<"enter ashok id:";
		cin>>aid;
		cout<<"enter ashok sub:";
		cin>>asub;
		
	}
};
class gopal
{
	public: 
	int gid;
	string gsub;
	void g_getdata()
	{
		cout<<"enter gopal id:";
		cin>>gid;
		cout<<"enter gopal sub:";
		cin>>gsub;
		
	}
};
class nirav
{
	public: 
	int nid;
	string nsub;
	void n_getdata()
	{
		cout<<"enter ashok id:";
		cin>>nid;
		cout<<"enter ashok sub:";
		cin>>nsub;
		
	}
};
class top:public ashok,public gopal,public nirav
{
		public:
			void printdata(){
			cout<<"\n-----------ashok-------";
			cout<<"ashok id"<<aid;
			cout<<"ashok sun"<<asub;
			cout<<"\n-------gopal--------";
			cout<<"gopal id:"<<gid;
			cout<<"gopal sub:"<<gsub;
			cout<<"\n---------nirav-------";
			cout<<"niran id: "<<nid;
			cout<<"nirav sub:"<<nsub;
		}
	
};
main()
{
	top tp;
	tp.a_getdata();
	tp.g_getdata();	
	tp.n_getdata();
	tp.printdata();
}
