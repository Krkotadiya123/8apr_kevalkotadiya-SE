//Create a class person having members name and age. Derive a class student
//having member percentage. Derive another class teacher having member
//salary. Write necessary member function to initialize, read and write data.
//Write also Main function (Multiple Inheritance) .
#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		string nm;
		void getperson(){
	
		cout<<"enter age :";
		cin>>age;
		cout<<"enter name:";
		cin>>nm;
		}
};
class student
{
	public:
		float pr;
		void getstudent()
		{
			cout<<"enter student pr:";
			cin>>pr;
		}
};
class teacher
{
	public:
	int salary;
	void getteacher(){

	cout<<"enter salary:";
	cin>>salary;
	}
	
};
class schooldata:public person,public student,public teacher
{
	public:
		void printdata()
		{
			cout<<"\n________person data_____ ";
			cout<<"\nage:"<<age;
			cout<<"\nname:"<<nm;
			cout<<"\n______student pr_____";
			cout<<"\nstudent pr:"<<pr;
			cout<<"\n______teacher______";
			cout<<"\nteacher salary;"<<salary;
		
		}
};
main()
{
		schooldata sd;
		sd.getperson();
		sd.getstudent();
		sd.getteacher();
		sd.printdata();
}

