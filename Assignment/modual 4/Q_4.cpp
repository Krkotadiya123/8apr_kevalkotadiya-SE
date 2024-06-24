#include<iostream>
using namespace std;
//WAP to create simple calculator using class

class Calculator {
public:
	int a,b;
	void getdata(){
		cout<<"enter number of a:";
		cin>>a;
		cout<<"enter number of b:";
		cin>>b;
		
	}
	void getadd(){
		cout<<a+b<<endl;
		
	}
	void getsub(){
		cout<<a-b<<endl;
		
	}
	void getmul(){
		cout<<a*b<<endl;
		
	}
	void getdiv(){
		cout<<a/b<<endl;
	}
	
};

main(){
    Calculator cl;
    cl.getdata();
     cl.getadd();
     cl.getsub();
     cl.getmul();
     cl.getdiv();
   
}

