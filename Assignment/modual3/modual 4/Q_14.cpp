//Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
using namespace std;
class master
{
	public:
		void getdata (string fname,string lname)
		{
			cout<<"fullname:"<<fname+lname;
			
		}
	
};


main()
{

	master ma;
	ma.getdata("keval","kotadiya");

}
